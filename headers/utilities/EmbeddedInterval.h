#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 3 member(s).
namespace SemanticsUM {
class EmbeddedInterval {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deserialize@EmbeddedInterval@SemanticsUM@@QEAAJAEAPEB_W@Z
    long Deserialize(wchar_t const * &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resolve@EmbeddedInterval@SemanticsUM@@QEBAJPEBU_SYSTEMTIME@@PEBU_TIME_ZONE_INFORMATION@@_N2PEAVInterval@2@_KPEA_K@Z
    long Resolve(_SYSTEMTIME const *, _TIME_ZONE_INFORMATION const *, bool, bool, WindissectOpaque *, uint64_t, uint64_t *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@EmbeddedInterval@SemanticsUM@@QEBAJPEA_W_KPEAPEA_WPEA_K@Z
    long Serialize(wchar_t *, uint64_t, wchar_t * *, uint64_t *) const;
};
} // namespace SemanticsUM
