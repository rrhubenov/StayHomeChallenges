#include <string>

Challenge(ChallgenIdLedger idLedger, std::string name) {
    this.id = idLedger.getId() + 1;

    if(this.isNameValid()) {
        this.name = name;
    } else {
        throw std::runtime_error("Challenge name is not valid: 
                must begin with a '#' and be <= 31 characters");
    }
}

bool isNameValid(std::string name) {
    //Validate name starts with # and is <= 31 chars
}
