#include <iostream>
#include <string>
#include <vector>
#include <map>


int main() {
  std::map<std::string, std::vector<std::pair<std::string, int>>> metro = {
    {"Okhotniy ryad", {{"Teatralnaya", 3}, {"Ploshyad revolutsii", 3}, {"Lubyanka", 1}, {"Biblioteka imeni Lenina", 1}}},
    {"Teatralnaya", {{"Okhotniy ryad", 3}, {"Ploshyad revolutsii", 3}, {"Tverskaya", 1}, {"Novokuznetskaya", 2}}},
    {"Ploshyad revolutsii", {{"Okhotniy ryad", 3}, {"Teatralnaya", 3}, {"Arbatskaya", 2}, {"Kurskaya 3", 2}}},
    {"Tverskaya", {{"Pushkinskaya", 3}, {"Chehovskaya", 3}, {"Teatralnaya", 1}, {"Mayakovskaya", 1}}},
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
    {"Novokuznetskaya", {{"Tretyakovskaya 6", 3}, {"Tretyakovskaya 8", 3}, {"Paveletskaya 2", 2}, {"Teatralnaya", 2}}},
    {"Polyanka", {{"Borovitskaya", 2}, {"Serpuhovskaya", 2}}},
    {"Kropotkinskaya", {{"Biblioteka imeni Lenina", 1}, {"Park kultury 1", 2}}},
    {"Smolenskaya 3", {{"Kievskaya 3", 1}, {"Arbatskaya 3", 2}}},
    {"Smolenskaya 4", {{"Kievskaya 4", 2}, {"Arbatskaya 4", 2}}},
    {"Mayakovskaya", {{"Tverskaya", 1}, {"Belorusskaya 2", 1}}},
    {"Sukharevskaya", {{"Turgenevskaya", 1}, {"Prospekt mira 6", 1}}},
    {"Krasnye vorota", {{"Chistye prudy",  1}, {"Komsomolskaya 1", 1}}},
    {"Komsomolskaya 1", {{"Komsomolskaya 5", 3}, {"Krasnye vorota", 1}}},
    {"Komsomolskaya 5", {{"Komsomolskaya 1", 3}, {"Prospekt mira 5", 2}, {"Kurskaya 5", 3}}},
    {"Kurskaya 3", {{"Ploshyad revolutsii", 2}, {"Kurskaya 5", 3}, {"Chkalovskaya", 3}}},
    {"Chkalovskaya", {{"Kurskaya 5", 3}, {"Kurskaya 3", 3}, {"Sretenskiy bulvar", 2}}},
    {"Kurskaya 5", {{"Kurskaya 3", 3}, {"Chkalovskaya", 3}, {"Komsomolskaya 5", 3}, {"Taganskaya 5", 2}}},
    {"Marksistskaya", {{"Taganskaya 5", 3}, {"Taganskaya 7", 3}, {"Tretyakovskaya 8", 2}}},
    {"Taganskaya 7", {{"Taganskaya 5", 3}, {"Marksistskaya", 3}, {"Kitay-gorod 7", 3}}},
    {"Taganskaya 5", {{"Taganskaya 7", 3}, {"Marksistskaya", 3}, {"Kurskaya 5", 2}, {"Paveletskaya 5", 1}}},
    {"Paveletskaya 2", {{"Novokuznetskaya", 2}, {"Paveletskaya 5", 3}}},
    {"Paveletskaya 5", {{"Paveletskaya 2", 3}, {"Taganskaya 5", 1}, {"Dobryninskaya", 1}}},
    {"Serpuhovskaya", {{"Dobryninskaya", 3}, {"Polyanka", 2}}},
    {"Dobryninskaya", {{"Serpuhovskaya", 3}, {"Paveletskaya 5", 1}, {"Oktyabrskaya 5", 1}}},
    {"Oktyabrskaya 6", {{"Oktyabrskaya 5", 3}, {"Tretyakovskaya 6", 2}}},
    {"Oktyabrskaya 5", {{"Oktyabrskaya  6", 3}, {"Dobryninskaya", 1}, {"Park kultury 5", 1}}},
    {"Park kultury 1", {{"Park kultury 5", 3}, {"Kropotkinskaya", 2}}},
    {"Park kultury 5", {{"Park kultury 1", 3}, {"Oktyabrskaya 5", 1}, {"Kievskaya 5", 2}}},
    {"Kievskaya 3", {{"Kievskaya 4", 3}, {"Kievskaya 5", 3}, {"Smolenskaya 3", 1}}},
    {"Kievskaya 4", {{"Kievskaya 3", 3}, {"Kievskaya 5", 3}, {"Smolenskaya 4", 2}}},
    {"Kievskaya 5", {{"Kievskaya 3", 3}, {"Kievskaya 4", 3}, {"Park kultury 5", 2}, {"Krasnopresnenskaya", 3}}},
    {"Barrikadnaya", {{"Krasnopresnenskaya", 3}, {"Pushkinskaya", 2}}},
    {"Krasnopresnenskaya", {{"Barrikadnaya", 3}, {"Kievskaya 5", 3}, {"Belorusskaya 5", 2}}},
    {"Belorusskaya 2", {{"Belorusskaya 5", 3}, {"Mayakovskaya", 1}}},
    {"Belorusskaya 5", {{"Belorusskaya 2", 3}, {"Krasnopresnenskaya", 2}, {"Novoslobodskaya", 2}}},
    {"Mendeleevskaya", {{"Novoslobodskaya", 3}, {"Tsvetnoy bulvar", 2}}},
    {"Novoslobodskaya", {{"Mendeleevskaya", 3}, {"Belorusskaya 5", 2}, {"Prospekt mira 5", 2}}},
    {"Prospekt mira 6", {{"Prospekt mira 5", 3}, {"Sukharevskaya", 1}}},
    {"Prospekt mira 5", {{"Prospekt mira 6", 3}, {"Novoslobodskaya", 2}, {"Komsomolskaya 5", 2}}},
    {"Komsomolskaya 1", {{"Komsomolskaya 5", 3}, {"Krasnye vorota", 1}}},
    {"Komsomolskaya 5", {{"Komsomolskaya 1", 3}, {"Prospekt mira 5", 2}, {"Kurskaya 5", 3}}}
  };
  std::cout << "Vse";

  return 0;
}
