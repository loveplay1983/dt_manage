#include "database.h"

bool DtDataBase::is_initialized = false;

QSqlDatabase DtDataBase::db;

QSqlDatabase &DtDataBase::getDtDataBase()
{
    if (!is_initialized)
    {
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("data\\database");
        db.open();
        is_initialized = true;
    }
    return db;
}
