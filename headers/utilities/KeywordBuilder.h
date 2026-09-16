#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 4 member(s).
class KeywordBuilder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@KeywordBuilder@@QEAAJPEA_WW4tagFORMAT_OPTION@@H@Z
    long Initialize(wchar_t *, int, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0KeywordBuilder@@QEAA@XZ
    KeywordBuilder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Merge@KeywordBuilder@@QEAAXAEAV1@@Z
    void Merge(KeywordBuilder &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1KeywordBuilder@@QEAA@XZ
    ~KeywordBuilder();
};
