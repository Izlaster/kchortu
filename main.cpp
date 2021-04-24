#include <iostream>
#
#include <vector>
#include <map>


int main() {
std::map<std::string, std::vector<std::pair<std::string, int>>> metro = {
  {"Okhotniy ryad", {{"Teatralnaya", 3}, {"Ploshyad revolutsii", 3}, {"Lubyanka", 1}, {"Biblioteka imeni Lenina", 1}}},
  {"Teatralnaya", {{"Okhotniy ryad", 3}, {"Ploshyad revolutsii", 3}, {"Tverskaya", 1}, {"Novokuznetskaya", 2}}},
  {"Ploshyad revolutsii", {{"Okhotniy ryad", 3}, {"Teatralnaya", 3}, {"Arbatskaya", 2}, {"Kurskaya", 3}}},
  {"Tverskaya", {{"Pushkinskaya", 3}, {"Chehovskaya", 3}, {"Teatralnaya", 1}, {"Belorusskaya 2", 3}}},
  {"Pushkinskaya", {{"Tverskaya", 3}, {"Chekhovskaya", 3}, {"Kuznetskiy most", 2}, {"Barrikadnaya", 2}}},
  {"Chekhovskaya", {{"Tverskaya", 3}, {"Chehovskaya", 3}, {"Tsvetnoy bulvar", 1}, {"Borovitskaya", 2}}},
  {"Kuznetskiy most", {{"Lubyanka, 3"}, {"Pushkinskaya", 2}, {"Kitay-gorod 7", 1}}},
  {"Lubyanka", {{"Kuznetskiy most", 3}, {"Okhotniy ryad", 1}, {"Chistye prudi", 2}}},
  {"Chistye prudy", {{"Turgenevskaya", 3}, {"Sretenskiy bulvar", 3}, {"Krasnye vorota", 1}, {"Lubyanka", 1}}},
  {"Turgenevskaya", {{"Chistye prudy", 3}, {"Sretenskiy bulvar", 3}, {"Sukharevskaya", 1}, {"Kitay-gorod 6", 1}}},
  {"Sretenskiy bulvar", {{"Turgenevskaya", 3}, {"Chistye prudy", 3}, {"Chkalovskaya", 2}, {"Trubnaya", 2}}},
  {"Trubnaya", {{"Tsvetnoy bulvar", 3}, {"Sretenskiy bulvar", 2}}},
  {"Tsvetnoy bulvar", {{"Trubnaya", 3}, {"Mendeleevskaya", 2}, {"Chekhovskaya", 1}}},
  {"Aleksandrovskiy sad", {{"Arbatskaya 3", 3}, {"Borovitskaya", 3}, {"Biblioteka imeni Lenina", 3}, {"Arbatskaya 4", 1}}},
  {"Arbatskaya 3", {{"Aleksandrovskiy sad", 3}, {"Borovitskaya", 3}, {"Biblioteka imeni Lenina", 3}, {"Smolenskaya 3", 2}, {"Ploshyad revolutsii", 2}}},
  {"Borovitskaya", {{"Aleksandrovskiy sad", 3}, {"Arbatskaya 3", 3}, {"Biblioteka imeni Lenina", 3}, {"Chekhovskaya", 2}, {"Polyanka", 2}}},
  {"Biblioteka imeni Lenina", {{"Aleksandrovskiy sad", 3}, {"Borovitskaya", 3}, {"Arbatskaya 3", 3}, {"Okhotniy ryad", 1}, {"Kropotkinskaya", 1}}},
  {"Arbatskaya 4", {{"Aleksandrovskiy sad", 1}, {"Smolenskaya 4", 2}}},
  {"Kitay-gorod 6", {{"Kitay-gorod 7", 3}, {"Turgenevskaya", 1}, {"Tretyakovskaya 6", 2}}},
  {"Kitay-gorod 7", {{"Kitay-gorod 6", 3}, {"Taganskaya 7", 3}, {"Kuznetskiy most", 1}}},
  {"Tretyakovskaya 6", {{"Novokuznetskaya", 3}, {"Tretyakovskaya 8", 3}, {"Kitay-gorod 6", 2}, {"Oktyabrskaya 6", 2}}},
  {"Tretyakovskaya 8", {{"Tretyakovskaya 6", 3}, {"Novokuznetskaya", 3}, {"Marksistskaya", 2}}},
  {"Novokuznetskaya", {{"Tretyakovskaya 6", 3}, {"Tretyakovskaya 8", 3}, {"Paveletskaya", 2}, {"Teatralnaya", 2}}},
  {}
};

  return 0;
}
