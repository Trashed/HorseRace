#include "includes/parser.h"

/*
 * Default constructor
 */
Parser::Parser()
{
    // ...
}

/*
 * Destructor
 */
Parser::~Parser()
{
    // ...
}

/*
 * Parser
 *
 * Gets a line, parsed from a text file, from FileActionThread
 * and with specific regexp key only the data needed is parsed
 * out. The string containing only the characters needed is returned.
 */
QString Parser::parseDataFromStringBuffer(QString _buffer)
{
    static int index = 1;

    // TODO: MUOKKAA TÄMÄ TOIMIVAKSI!

    /*else if (strBuffer.contains("Lähtö " + QString::number(index)))
    {
        qDebug() << "String exists: Lähtö "  + QString::number(index);
        horseBuffer.setHorseNumber(index);
        index++;
    }
    else if (strBuffer.contains("Yht:"))
    {
        qDebug() << "String exists: " + strBuffer;


        //TÄMÄ PARSERIIN?!?!
        QRegExp rx("(\\d+\\,\\d*|\\d\\.\\d*|\\d+)");
        QStringList list;
        int pos = 0;

        while ((pos = rx.indexIn(strBuffer, pos)) != -1)
        {
            list << rx.cap(1);
            pos += rx.matchedLength();

        }
        qDebug() << "parsed out: " << list;

    }
    else if (strBuffer.contains(QRegExp("(^\\D+\\s)")))
    {
        // TODO: tähän rivi nimen etsintää varten?
        // TODO: löytyy tällä rivillä: "^\\D+\\s"
        // tai: "^\\D+"
        // tai: "^[^\s\d\(\)\,\.]\w+\s\w+"
        // HUOM: etsitään seuraavaa: "\d\s[e]\s$" -> lukee merkkijonon lopusta
        //       jos löytyy, otetaan merkkijonon ALUSTA nimi talteen

        QRegExp rx("(^\\D+\\s)");
        QStringList list;
        int pos = 0;

        while ((pos = rx.indexIn(strBuffer, pos)) != -1)
        {
            list << rx.cap(1);
            pos += rx.matchedLength();

        }
        qDebug() << "parsed out: " << list;
    }
    else
    {
        // "\d+\,\d*\W\d|\d+\,\d*\d\w+\s+\d+|\d+\,\d*\d\w"  tällä rivillä saa ulos km-ajan sekä sijoituksen muodossa <34,3 2>
    }*/

    return "";  // TODO: lisää palautusmuuttuja
}
