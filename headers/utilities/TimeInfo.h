#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 11 member(s).
namespace SemanticsUM {
class TimeInfo {
public:
    class SimpleLength;
    class TimePoint;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deserialize@TimeInfo@SemanticsUM@@QEAAJAEAPEB_W@Z
    long Deserialize(wchar_t const * &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExcludeFromIntervalEnd@TimeInfo@SemanticsUM@@QEBA_NXZ
    bool ExcludeFromIntervalEnd() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resolve@TimeInfo@SemanticsUM@@QEBAJPEBU_SYSTEMTIME@@PEBU_TIME_ZONE_INFORMATION@@_N2PEAVInterval@2@_KPEA_K@Z
    long Resolve(_SYSTEMTIME const *, _TIME_ZONE_INFORMATION const *, bool, bool, WindissectOpaque *, uint64_t, uint64_t *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@TimeInfo@SemanticsUM@@QEBAJPEA_W_KPEAPEA_WPEA_K@Z
    long Serialize(wchar_t *, uint64_t, wchar_t * *, uint64_t *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClosedInterval@TimeInfo@SemanticsUM@@QEAAXAEBV12@_N01@Z
    void SetClosedInterval(WindissectOpaque const &, bool, WindissectOpaque const &, bool);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deserialize@TimeInfo@SemanticsUM@@KAJAEAPEB_WAEAF@Z
    static long Deserialize(wchar_t const * &, short &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deserialize@TimeInfo@SemanticsUM@@KAJAEAPEB_WAEAW4TimeComponent@2@@Z
    static long Deserialize(wchar_t const * &, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@TimeInfo@SemanticsUM@@KAJPEA_W_KFPEAPEA_WPEA_K@Z
    static long Serialize(wchar_t *, uint64_t, short, wchar_t * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@TimeInfo@SemanticsUM@@KAJPEA_W_KW4TimeComponent@2@PEAPEA_WPEA_K@Z
    static long Serialize(wchar_t *, uint64_t, int, wchar_t * *, uint64_t *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealBeginning@TimeInfo@SemanticsUM@@AEBAXAEAVTimePoint@12@@Z
    void GetRealBeginning(WindissectOpaque &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealEnd@TimeInfo@SemanticsUM@@AEBAXAEAVTimePoint@12@@Z
    void GetRealEnd(WindissectOpaque &) const;
};
} // namespace SemanticsUM
