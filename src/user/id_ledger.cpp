#include "../../include/user/id_ledger.hh"

IdLedger::IdLedger() {
    this->last_id = 0;
}

short IdLedger::getLastId() {
    return this->last_id;
}

void IdLedger::updateLastId() {
    this->last_id++;
}
