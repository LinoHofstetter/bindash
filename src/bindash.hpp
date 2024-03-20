#ifndef BINDASH_HPP
#define BINDASH_HPP

#include <string>
#include <vector>

// Forward declarations for any classes or structs used in the functions below
// If there are specific structs or classes used as parameters or return types,
// they should be declared or included here. For example:
class Entity;
struct Sketchargs;
struct Distargs;

// Declaration of bindash_main, replacing the main function.
// Adjust parameters as needed to match how you plan to use it.
int bindash_main(int argc, char** argv);

// Additional functions  to expose for external use
//void entity_init(Entity &entity, CBuf &cbuf, const std::string &entityname, const Sketchargs &args, const size_t nseqs = SIZE_MAX);
//void entities_init(std::vector<Entity> &entities, std::string fname, const Sketchargs &args, const std::vector<std::pair<size_t, size_t>> &entityid_to_count_vec, const std::vector<std::string> &entityid_to_name);

// example declaration of global variables if I would need to access some
//extern const int SOME_IMPORTANT_CONSTANT;

#endif // BINDASH_HPP
