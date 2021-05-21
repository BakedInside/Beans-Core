// Copyright (c) 2011-2020 The Beans Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BEANS_QT_BEANSADDRESSVALIDATOR_H
#define BEANS_QT_BEANSADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class BeansAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BeansAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

/** Beans address widget validator, checks for a valid beans address.
 */
class BeansAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BeansAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

#endif // BEANS_QT_BEANSADDRESSVALIDATOR_H
