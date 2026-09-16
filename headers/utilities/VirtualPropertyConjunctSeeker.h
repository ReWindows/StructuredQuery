#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 3 member(s).
namespace StructuredQuery1 {
class VirtualPropertyConjunctSeeker {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindRepeatedVirtualProperty@VirtualPropertyConjunctSeeker@StructuredQuery1@@QEAAJPEAUIObjectArray@@PEAPEBUVIRTUAL_PROPERTY_INFO@2@@Z
    long FindRepeatedVirtualProperty(IObjectArray *, WindissectOpaque const * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VirtualPropertyConjunctSeeker@StructuredQuery1@@QEAA@XZ
    ~VirtualPropertyConjunctSeeker();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindVirtualProperty@VirtualPropertyConjunctSeeker@StructuredQuery1@@AEAAJPEAUICondition2@@IPEAPEBUVIRTUAL_PROPERTY_INFO@2@@Z
    long FindVirtualProperty(ICondition2*, unsigned int, WindissectOpaque const * *);
};
} // namespace StructuredQuery1
