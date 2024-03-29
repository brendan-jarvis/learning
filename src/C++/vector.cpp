#include <iostream>
#include <vector>

int main()
{

  struct City
  {
    std::string name;
    double latitude;
    double longitude;
  };
  std::vector<City> cities;

  cities.push_back({"New York", 40.7128, -74.0060});
  cities.push_back({"San Francisco", 37.7749, -122.4194});
  cities.push_back({"Chicago", 41.8781, -87.6298});
  cities.push_back({"Dallas", 32.7767, -96.7970});
  cities.push_back({"Philadelphia", 39.9526, -75.1652});

  std::vector<double> cities_latitudes = {40.7128, 37.7749, 41.8781, 32.7767, 39.9526};
  std::vector<double> cities_longitudes = {-74.0060, -122.4194, -87.6298, -96.7970, -75.1652};
  std::vector<std::string> cities_names = {"New York", "San Francisco", "Chicago", "Dallas", "Philadelphia"};

  cities_latitudes.push_back(29.7604);
  cities_longitudes.push_back(-95.3698);
  cities_names.push_back("Houston");

  std::cout << "Cities latitudes:\n";
  for (int i = 0; i < cities_latitudes.size(); i++)
  {
    std::cout << cities_names[i] << ": ";
    std::cout << cities_latitudes[i] << ", " << cities_longitudes[i] << "\n";
  }

  std::cout << "\nCities with struct:\n";
  for (int i = 0; i < cities.size(); i++)
  {
    std::cout << cities[i].name << ": ";
    std::cout << cities[i].latitude << ", " << cities[i].longitude << "\n";
  }
}