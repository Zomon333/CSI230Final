## Program Overview:
This program uses the MaxMind GeoIP2 CSV Database in order to perform IP geolocation from the commandline. 
As a result, for proper commandline usage, this program is dependent on the boost_program_options library.
By using the formatting of the MaxMind GeoIP2 CSV Database, this program can pull information in and store it inside of the IPHolder class, designed specifically to store the CSV's information. The IPHolder.h and IPHolder.cpp files are intended to be used as a shared object library, but can be included as source code and will work without issue.

### Proper Usage:
Compile and link IPHolder.h, IPHolder.cpp, main.cpp, and the boost_program_options library into a single executable.
Running the executable will request the following information:
-Database to search
-IP to look up

**These parameters also have inline versions:**

```  -ip <ip>```

```  -database <database>```

### Dependencies:
-boost_program_options
