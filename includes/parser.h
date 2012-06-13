//
// parser.h
//
// Parser goes through the text file and parses data
// for Horse and Race classes.
//

#ifndef PARSER_H
#define PARSER_H

#include <QTextStream>

class Parser : public QTextStream
{
public:
    Parser();
    ~Parser();

    /* TODO:
     * - metodi rivin lukemiselle (koska peritty, voi k‰ytt‰‰ QTextStreamin readLine()-metodia??)
     * -
     */

protected:

private:
    /* TODO:
     * - QString-muuttuja luettavalle riville
     * - metodi(t) rivien parsimista varten (palauttaa halutun (numeerisen?) arvon)
     */
};

#endif // PARSER_H
