#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 18 member(s).
namespace SemanticsUM {
class Entity {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Entity@SemanticsUM@@QEAA@XZ
    Entity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindNamedEntityByValue@Entity@SemanticsUM@@QEBAPEBVNamedEntity@2@PEB_W@Z
    WindissectOpaque const * FindNamedEntityByValue(wchar_t const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindRelationByName@Entity@SemanticsUM@@QEBAPEBVRelationship@2@PEB_W@Z
    WindissectOpaque const * FindRelationByName(wchar_t const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBase@Entity@SemanticsUM@@UEBAPEBVIEntity@2@XZ
    virtual WindissectOpaque const * GetBase() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDerivedEntity@Entity@SemanticsUM@@UEBAPEBVIEntity@2@K@Z
    virtual WindissectOpaque const * GetDerivedEntity(unsigned long) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMetaData@Entity@SemanticsUM@@UEBAPEBVIMetaData@2@K@Z
    virtual WindissectOpaque const * GetMetaData(unsigned long) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRelationship@Entity@SemanticsUM@@UEBAPEBVIRelationship@2@K@Z
    virtual WindissectOpaque const * GetRelationship(unsigned long) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRelationship@Entity@SemanticsUM@@UEBAPEBVIRelationship@2@PEB_W@Z
    virtual WindissectOpaque const * GetRelationship(wchar_t const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@Entity@SemanticsUM@@QEAAJPEAUISequentialStream@@PEBVSchemaBinary@2@@Z
    long Load(ISequentialStream *, WindissectOpaque const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Name@Entity@SemanticsUM@@UEBAPEB_WXZ
    virtual wchar_t const * Name() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NumberOfDerivedEntities@Entity@SemanticsUM@@UEBAKXZ
    virtual unsigned long NumberOfDerivedEntities() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NumberOfMetaData@Entity@SemanticsUM@@UEBAKXZ
    virtual unsigned long NumberOfMetaData() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NumberOfNamedEntities@Entity@SemanticsUM@@UEBAKXZ
    virtual unsigned long NumberOfNamedEntities() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NumberOfRelationships@Entity@SemanticsUM@@UEBAKXZ
    virtual unsigned long NumberOfRelationships() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreferredPhrase@Entity@SemanticsUM@@UEBAPEB_WXZ
    virtual wchar_t const * PreferredPhrase() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@Entity@SemanticsUM@@QEBAJPEAUISequentialStream@@AEBV?$OffsetCalculator@_W@2@AEBV?$OffsetCalculator@VRelationship@SemanticsUM@@@2@AEBV?$OffsetCalculator@PEBVPathNode@SemanticsUM@@@2@AEBV?$OffsetCalculator@VMetaData@SemanticsUM@@@2@PEBVSchemaBinary@2@@Z
    long Save(ISequentialStream *, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Entity@SemanticsUM@@UEAA@XZ
    virtual ~Entity();
};
} // namespace SemanticsUM
