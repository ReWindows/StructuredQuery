#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 5 member(s).
namespace SemanticsUM {
class TokenFragmentStatistics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@TokenFragmentStatistics@SemanticsUM@@SAJPEB_WAEBVITokenCollection@2@PEAPEAV12@@Z
    static long Create(wchar_t const *, WindissectOpaque const &, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecordFragments@TokenFragmentStatistics@SemanticsUM@@QEAAXPEAVLattice@2@@Z
    void RecordFragments(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TokenFragmentStatistics@SemanticsUM@@QEAA@XZ
    ~TokenFragmentStatistics();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@TokenFragmentStatistics@SemanticsUM@@AEAAJPEB_WAEBVITokenCollection@2@@Z
    long Initialize(wchar_t const *, WindissectOpaque const &);
};
} // namespace SemanticsUM
