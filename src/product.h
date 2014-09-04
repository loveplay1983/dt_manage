#ifndef PRODUCT_H
#define PRODUCT_H

#include <QString>

struct ProductData {
    QString p_id_s;
    QString p_name_s;
    QString p_unit_s;
    QString p_price_s;
    QString p_specification_s;
    QString p_remain_s;
    QString p_remark_s;
};

/*
 * return 0 if data is ok, else return i means i'th data is bad
 **/
int ValidateProductData(const ProductData &pro_data,
                        QString &msg);

#endif // PRODUCT_H
