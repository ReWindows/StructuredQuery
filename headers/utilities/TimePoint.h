#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 25 member(s).
namespace SemanticsUM::TimeInfo {
class TimePoint {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActualWidth@TimePoint@TimeInfo@SemanticsUM@@QEBA?AW4TimeComponent@3@XZ
    int ActualWidth() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deserialize@TimePoint@TimeInfo@SemanticsUM@@QEAAJAEAPEB_W@Z
    long Deserialize(wchar_t const * &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Increment@TimePoint@TimeInfo@SemanticsUM@@QEAAXW4TimeComponent@3@HW4IncrementSafety@123@@Z
    void Increment(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InstantiateToLowerLimit@TimePoint@TimeInfo@SemanticsUM@@QEAAXXZ
    void InstantiateToLowerLimit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LowerLimit@TimePoint@TimeInfo@SemanticsUM@@QEBAHW4TimeComponent@3@@Z
    int LowerLimit(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeSureMonthDay@TimePoint@TimeInfo@SemanticsUM@@QEAAXXZ
    void MakeSureMonthDay();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NaturalWidth@TimePoint@TimeInfo@SemanticsUM@@QEBA?AW4TimeComponent@3@XZ
    int NaturalWidth() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Normalize@TimePoint@TimeInfo@SemanticsUM@@QEAAXXZ
    void Normalize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NormalizeOffset@TimePoint@TimeInfo@SemanticsUM@@QEAAXXZ
    void NormalizeOffset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resolve@TimePoint@TimeInfo@SemanticsUM@@QEBAJAEBV123@_NPEAV123@_KPEA_K@Z
    long Resolve(WindissectOpaque const &, bool, WindissectOpaque *, uint64_t, uint64_t *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Sanitize@TimePoint@TimeInfo@SemanticsUM@@QEAAXXZ
    void Sanitize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@TimePoint@TimeInfo@SemanticsUM@@QEBAJPEA_W_KPEAPEA_WPEA_K@Z
    long Serialize(wchar_t *, uint64_t, wchar_t * *, uint64_t *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToFileTime@TimePoint@TimeInfo@SemanticsUM@@QEBAJPEBU_TIME_ZONE_INFORMATION@@PEAW4FILETIME_STATUS@3@PEAU_FILETIME@@@Z
    long ToFileTime(_TIME_ZONE_INFORMATION const *, int *, _FILETIME *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UntangleMe@TimePoint@TimeInfo@SemanticsUM@@QEBAXAEAV123@@Z
    void UntangleMe(WindissectOpaque &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpperLimit@TimePoint@TimeInfo@SemanticsUM@@QEBAHW4TimeComponent@3@@Z
    int UpperLimit(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Vary@TimePoint@TimeInfo@SemanticsUM@@QEAAJAEBV123@_NPEAV123@_KPEA_K@Z
    long Vary(WindissectOpaque const &, bool, WindissectOpaque *, uint64_t, uint64_t *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComponentWidth@TimePoint@TimeInfo@SemanticsUM@@AEBA?AW4TimeComponent@3@XZ
    int ComponentWidth() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deserialize@TimePoint@TimeInfo@SemanticsUM@@CAJAEAPEB_WAEAW4PointStatus@123@@Z
    static long Deserialize(wchar_t const * &, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixOverflow@TimePoint@TimeInfo@SemanticsUM@@AEAAXW4TimeComponent@3@0W4IncrementSafety@123@@Z
    void FixOverflow(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixUnderflow@TimePoint@TimeInfo@SemanticsUM@@AEAAXW4TimeComponent@3@0W4IncrementSafety@123@@Z
    void FixUnderflow(int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SanitizeComponent@TimePoint@TimeInfo@SemanticsUM@@AEAAXW4TimeComponent@3@W4IncrementSafety@123@@Z
    void SanitizeComponent(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@TimePoint@TimeInfo@SemanticsUM@@CAJPEA_W_KW4PointStatus@123@PEAPEA_WPEA_K@Z
    static long Serialize(wchar_t *, uint64_t, int, wchar_t * *, uint64_t *);
};
} // namespace SemanticsUM::TimeInfo
