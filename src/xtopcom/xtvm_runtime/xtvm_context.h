// Copyright (c) 2017-present Telos Foundation & contributors
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include "xbasic/xbyte_buffer.h"
#include "xcommon/xaccount_address_fwd.h"

NS_BEG2(top, tvm)

class xtop_vm_context {
private:
    xbytes_t m_input_data;

public:
    xbytes_t const & input_data() const;
    uint64_t gas_price() const;
    common::xaccount_address_t sender() const;
    uint64_t block_height() const;
    common::xaccount_address_t coinbase() const;
    uint64_t block_timestamp() const;
    uint64_t chain_id() const;
};
using xtvm_context_t = xtop_vm_context;

NS_END2