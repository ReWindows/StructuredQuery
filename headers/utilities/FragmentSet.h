#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 5 member(s).
namespace SemanticsUM {
class FragmentSet {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddNewFragment@FragmentSet@SemanticsUM@@QEAAJW4FragmentType@2@PEBVPathNode@2@HHNHHPEB_W_NK@Z
    long AddNewFragment(int, WindissectOpaque const *, int, int, double, int, int, wchar_t const *, bool, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddNewFragment@FragmentSet@SemanticsUM@@QEAAJW4FragmentType@2@PEBVEntity@2@HHNHH_NK@Z
    long AddNewFragment(int, WindissectOpaque const *, int, int, double, int, int, bool, unsigned long);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FragmentSet@SemanticsUM@@QEAA@XZ
    FragmentSet();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FragmentSet@SemanticsUM@@QEAA@XZ
    ~FragmentSet();
};
} // namespace SemanticsUM
