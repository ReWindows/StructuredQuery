#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 8 member(s).
namespace StructuredQuery1 {
class ConditionGroupManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddConjunct@ConditionGroupManager@StructuredQuery1@@QEAAJW4SQL_GENERATION_OPTIONS@@PEAUICondition2@@@Z
    long AddConjunct(int, ICondition2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ConditionGroupManager@StructuredQuery1@@QEAAJK@Z
    long Initialize(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ConditionGroupManager@StructuredQuery1@@QEAA@XZ
    ~ConditionGroupManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArePermittedInDeepContains@ConditionGroupManager@StructuredQuery1@@AEAA_NPEAUICondition2@@PEAU_tagpropertykey@@PEAK@Z
    bool ArePermittedInDeepContains(ICondition2*, _tagpropertykey *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArePermittedInDeepContainsRec@ConditionGroupManager@StructuredQuery1@@AEAA_NPEAUICondition2@@_NPEAU_tagpropertykey@@PEAKPEAH@Z
    bool ArePermittedInDeepContainsRec(ICondition2*, bool, _tagpropertykey *, unsigned long *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindGroup@ConditionGroupManager@StructuredQuery1@@AEAAJW4CONDITION_GROUP_TYPE@2@AEBU_tagpropertykey@@KW4INDEXER_QUERY_OPTIONS@@W4tagMERGE_STRATEGY@@PEAK@Z
    long FindGroup(int, _tagpropertykey const &, unsigned long, int, int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindGroupOld@ConditionGroupManager@StructuredQuery1@@AEAAJW4CONDITION_GROUP_TYPE@2@AEBU_tagpropertykey@@KPEAK@Z
    long FindGroupOld(int, _tagpropertykey const &, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLCID@ConditionGroupManager@StructuredQuery1@@AEAAKPEAUICondition2@@@Z
    unsigned long GetLCID(ICondition2*);
};
} // namespace StructuredQuery1
