#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 4 member(s).
namespace SemanticsUM::TimeInfo {
class SimpleLength {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deserialize@SimpleLength@TimeInfo@SemanticsUM@@QEAAJAEAPEB_W@Z
    long Deserialize(wchar_t const * &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@SimpleLength@TimeInfo@SemanticsUM@@QEBAJPEA_W_KPEAPEA_WPEA_K@Z
    long Serialize(wchar_t *, uint64_t, wchar_t * *, uint64_t *) const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StepDown@SimpleLength@TimeInfo@SemanticsUM@@AEAA_NXZ
    bool StepDown();
};
} // namespace SemanticsUM::TimeInfo
