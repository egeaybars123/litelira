// Copyright (c) 2011-2014 The LiteLira Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef LITELIRA_QT_LITELIRAADDRESSVALIDATOR_H
#define LITELIRA_QT_LITELIRAADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class LiteLiraAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit LiteLiraAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** LiteLira address widget validator, checks for a valid litelira address.
 */
class LiteLiraAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit LiteLiraAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // LITELIRA_QT_LITELIRAADDRESSVALIDATOR_H
