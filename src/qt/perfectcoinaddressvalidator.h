// Copyright (c) 2011-2014 The Bitcoin Core developers
// Copyright (c) 2017 The Pigeon Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef PERFECTCOIN_QT_PERFECTCOINADDRESSVALIDATOR_H
#define PERFECTCOIN_QT_PERFECTCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class PerfectCoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit PerfectCoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Pigeon address widget validator, checks for a valid perfectcoin address.
 */
class PerfectCoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit PerfectCoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // PERFECTCOIN_QT_PERFECTCOINADDRESSVALIDATOR_H
