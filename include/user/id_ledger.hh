#pragma once


class IdLedger {
    private:
        short last_id;
    public:
        IdLedger();

        short getLastId();
        void updateLastId();
};

