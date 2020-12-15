/**
 * @file IPHolder.cpp
 * @brief Contains function definitions for IPHolder class; used to store and evaluate information from a CSV file.
 * @author Dagan Poulin
 * @date 12/15/2020
 * @assignment Final Project
 **/

#include "IPHolder.h"
/**
 * @brief Constructs default IPHolder
 * @date 12/15/2020
 */
IPHolder::IPHolder()
{
    this->network="DEFAULT";
    this->geoname_id="DEFAULT";
    this->registered_country_geoname_id="DEFAULT";
    this->represented_country_geoname_id="DEFAULT";
    this->is_anonymous_proxy="DEFAULT";
    this->is_satellite_provider="DEFAULT";
    this->postal_code="DEFAULT";
    this->latitude="DEFAULT";
    this->longitude="DEFAULT";
    this->accuracy_radius="DEFAULT";
}

/**
 * @brief Constructs IPHolder from single line in .csv format
 * @date 12/15/2020
 * @param string line, the string to populate the object from
 */
IPHolder::IPHolder(string line)
{
    vector<string> params;
    string workingString;
    long unsigned int i = 0;

    while(i<line.length())
    {
        if(line[i]==',')
        {
            params.push_back(workingString);
            workingString="";
            i++;
        }
        else
        {
            workingString+=line[i];
            i++;
        }
    }
    params.push_back(workingString);

    this->network=params[0];
    this->geoname_id=params[1];
    this->registered_country_geoname_id=params[2];
    this->represented_country_geoname_id=params[3];
    this->is_anonymous_proxy=params[4];
    this->is_satellite_provider=params[5];
    this->postal_code=params[6];
    this->latitude=params[7];
    this->longitude=params[8];
    this->accuracy_radius=params[9];

}

/**
 * @brief Gets the network from the object
 * @date 12/15/2020
 * @return string
 */
string IPHolder::getNetwork()
{
    return this->network;    
}

/**
 * @brief Gets the geoname_id from the object
 * @date 12/15/2020
 * @return string
 */
string IPHolder::getGeoname_id()
{
    return this->geoname_id;
}

/**
 * @brief Gets the registered_country_geoname_id from the object
 * @date 12/15/2020
 * @return string
 */
string IPHolder::getRegistered_country_geoname_id()
{
    return this->registered_country_geoname_id;
}

/**
 * @brief Gets the represented_country_geoname_id from the object
 * @date 12/15/2020
 * @return string
 */
string IPHolder::getRepresented_country_geoname_id()
{
    return this->represented_country_geoname_id;
}

/**
 * @brief Gets the is_anonymous_proxy from the object
 * @date 12/15/2020
 * @return string
 */
string IPHolder::getIs_anonymous_proxy()
{
   return this->is_anonymous_proxy; 
}

/**
 * @brief Gets the is_satellite_provider from the object
 * @date 12/15/2020
 * @return string
 */
string IPHolder::getIs_satellite_provider()
{
    return this->is_satellite_provider;
}

/**
 * @brief Gets the postal_code from the object
 * @date 12/15/2020
 * @return string
 */
string IPHolder::getPostal_code()
{
   return this->postal_code; 
}

/**
 * @brief Gets the latitude from the object
 * @date 12/15/2020
 * @return string
 */
string IPHolder::getLatitude()
{
   return this->latitude; 
}

/**
 * @brief Gets the longitude from the object
 * @date 12/15/2020
 * @return string
 */
string IPHolder::getLongitude()
{
   return this->longitude; 
}

/**
 * @brief Gets the accuracy_radius from the object
 * @date 12/15/2020
 * @return string
 */
string IPHolder::getAccuracy_radius()
{
    return this->accuracy_radius;
}

/**
 * @brief Sets the object's network
 * @date 12/15/2020
 * @param string input, new network
 */
void IPHolder::setNetwork(string input)
{
   network=input; 
}

/**
 * @brief Sets the object's geoname_id
 * @date 12/15/2020
 * @param string input, new geoname_id
 */
void IPHolder::setGeoname_id(string input)
{
    geoname_id=input;
}

/**
 * @brief Sets the object's registered_country_geoname_id
 * @date 12/15/2020
 * @param string input, new registered_country_geoname_id
 */
void IPHolder::setRegistered_country_geoname_id(string input)
{
    registered_country_geoname_id=input;
}

/**
 * @brief Sets the object's represented_country_geoname_id
 * @date 12/15/2020
 * @param string input, new represented_country_geoname_id
 */
void IPHolder::setRepresented_country_geoname_id(string input)
{
    represented_country_geoname_id=input;
}

/**
 * @brief Sets the object's is_anonymous_proxy
 * @date 12/15/2020
 * @param string input, new is_anonymous_proxy
 */
void IPHolder::setIs_anonymous_proxy(string input)
{
    is_anonymous_proxy=input;
}

/**
 * @brief Sets the object's is_satellite_provider
 * @date 12/15/2020
 * @param string input, new is_satellite_provider
 */
void IPHolder::setIs_satellite_provider(string input)
{
    is_satellite_provider=input;
}

/**
 * @brief Sets the object's postal_code
 * @date 12/15/2020
 * @param string input, new postal_code
 */
void IPHolder::setPostal_code(string input)
{
    postal_code=input;
}

/**
 * @brief Sets the object's latitude
 * @date 12/15/2020
 * @param string input, new latitude
 */
void IPHolder::setLatitude(string input)
{
    latitude=input;
}

/**
 * @brief Sets the object's longitude
 * @date 12/15/2020
 * @param string input, new longitude
 */
void IPHolder::setLongitude(string input)
{
    longitude=input;
}

/**
 * @brief Sets the object's accuracy_radius
 * @date 12/15/2020
 * @param string input, new accuracy_radius
 */
void IPHolder::setAccuracy_radius(string input)
{
    accuracy_radius=input;
}
