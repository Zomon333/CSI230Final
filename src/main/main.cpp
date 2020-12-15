#include "IPHolder.h"
#include <boost/program_options.hpp>
#include <boost/lambda/lambda.hpp>
using namespace std;

int main(int argc, char* argv[], char* env[])
{
    string IPLookup;
    string databasename;
    try{
            boost::program_options::options_description desc{"Options"};
            desc.add_options()
                ("help,h", "Help screen")
                ("ip",boost::program_options::value<std::string>()->default_value(""), "IP To Lookup")
                ("database",boost::program_options::value<std::string>()->default_value(""), "Database Directory"); //Pulling in options

                boost::program_options::variables_map vm;
                boost::program_options::store(parse_command_line(argc, argv, desc), vm);
                boost::program_options::notify(vm);

                if (vm.count("help"))
                    std::cout << desc << '\n';
                if (vm.count("ip"))
                {
                    IPLookup = vm["ip"].as<std::string>();
                }
                else
                {    
                    cout<<"Please enter the IP to lookup: \n";
                    cin>>IPLookup;
                }
                
                    
                if (vm.count("database"))
                {
                    databasename = vm["database"].as<string>();
                }
                else
                {
                             
                    cout<<"Please enter the database's name and directory: \n";
                    cin>>databasename;
                }   
            }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    ifstream csv;
    if(!databasename.empty())
    {
        csv.open(databasename);
        if(!csv.is_open())
        {
            cout<<"Failed to open file.\n";
            return EXIT_FAILURE;
        }
            
    }
    else
    {
        cout<<"Failed to open file.\n";
        return EXIT_FAILURE;
    }

    cout<<"Searching Database: Please wait.\n\n";
    string line;
    IPHolder current;
    while(!csv.eof())
    {
        getline(csv, line);
        current = IPHolder(line);
        if(current.getNetwork()==IPLookup)
        {
            break;
        }
    }
    if(current.getNetwork()==IPLookup)
    {
        cout<<"IP Found with geolocation "<<current.getLongitude()<<","<<current.getLatitude()<<endl;
            ofstream mapmarker;
            mapmarker.open("mapmarker.kml");
            mapmarker<<"<?xml version=\"1.0\" encoding=\"UTF-8\"?> <kml xmlns=\"http://www.opengis.net/kml/2.2\"> <Document> <Placemark> <name>"<<current.getNetwork()<<"</name> <Point><coordinates>"<<current.getLongitude()<<','<<current.getLatitude()<<"</coordinates></Point> </Placemark> </Document> </kml>";
            mapmarker.close();
    }
    else
    {
        cout<<"IP not found in database. Aborting.\n";
    }

    return EXIT_SUCCESS;
}