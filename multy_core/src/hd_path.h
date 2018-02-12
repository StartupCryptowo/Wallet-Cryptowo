/* Copyright 2018 by Multy.io
 * Licensed under Multy.io license.
 *
 * See LICENSE for details
 */

#ifndef MULTY_CORE_SRC_HD_PATH_H
#define MULTY_CORE_SRC_HD_PATH_H

#include <cstdint>
#include <string>
#include <vector>

namespace multy_core
{
namespace internal
{
// Hierarchical Deterministic path (bip32, bip44).
typedef std::vector<uint32_t> HDPath;

const uint32_t HARDENED_INDEX_BASE = 0x80000000;

HDPath make_child_path(HDPath parent_path, uint32_t child_chain_code);
std::string to_string(const HDPath& path);

} // namespace multy_core

} // namespace internal

#endif // HD_PATH_H