/**
 * @file IPHolder.h
 * @brief Declarations for IPHolder class
 * 
 * @author Dagan Poulin
 * @date 11/30/2020
 * @assignment Lab 12.1
 **/

#ifndef IPHOLDER_H
#define IPHOLDER_H
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <boost/program_options.hpp>
#include <boost/lambda/lambda.hpp>

#endif
using namespace std;
class IPHolder
{
private:
    string network;
    string geoname_id;
    string registered_country_geoname_id;
    string represented_country_geoname_id;
    string is_anonymous_proxy;
    string is_satellite_provider;
    string postal_code;
    string latitude;
    string longitude;
    string accuracy_radius;
public:
    IPHolder();
    IPHolder(string line);

    string getNetwork();
    string getGeoname_id();
    string getRegistered_country_geoname_id();
    string getRepresented_country_geoname_id();
    string getIs_anonymous_proxy();
    string getIs_satellite_provider();
    string getPostal_code();
    string getLatitude();
    string getLongitude();
    string getAccuracy_radius();

    void setNetwork(string input);
    void setGeoname_id(string input);
    void setRegistered_country_geoname_id(string input);
    void setRepresented_country_geoname_id(string input);
    void setIs_anonymous_proxy(string input);
    void setIs_satellite_provider(string input);
    void setPostal_code(string input);
    void setLatitude(string input);
    void setLongitude(string input);
    void setAccuracy_radius(string input);
};