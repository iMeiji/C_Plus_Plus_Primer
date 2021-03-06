/**
 * @file
 *      Bulk_quote.h
 * @author
 *      Henrik Samuelsson, henrik.samuelsson(at)gmail.com
 * @brief
 *      Part of exercise 15.6 from the book C++ Primer (5th edition).
 */
#ifndef BULK_QUOTE_H
#define BULK_QUOTE_H

#include <string>
#include "Quote.h"

class Bulk_quote : public Quote {
public:
    Bulk_quote() = default;
    Bulk_quote(const std::string& isbn, double p, std::size_t q, double d) : 
        Quote(isbn, p), min_qty(q), discount(d) { }
    
    double net_price(std::size_t n) const override;
private:
    std::size_t min_qty = 0;
    double discount = 0.0;
};

#endif
