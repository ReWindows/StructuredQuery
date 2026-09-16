#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 45 member(s).
namespace StructuredQuery1 {
class SqlGenerator {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SqlGenerator@StructuredQuery1@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@SqlGenerator@StructuredQuery1@@SAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateFromConditionToBuffer@SqlGenerator@StructuredQuery1@@UEAAJPEAUICondition@@KPEA_WKPEAPEA_WPEAK@Z
    virtual long GenerateFromConditionToBuffer(ICondition *, unsigned long, wchar_t *, unsigned long, wchar_t * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateFromConditionToString@SqlGenerator@StructuredQuery1@@UEAAJPEAUICondition@@KPEAPEA_W@Z
    virtual long GenerateFromConditionToString(ICondition *, unsigned long, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateFromStringToBuffer@SqlGenerator@StructuredQuery1@@UEAAJPEB_WKHPEA_WK@Z
    virtual long GenerateFromStringToBuffer(wchar_t const *, unsigned long, int, wchar_t *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateFromStringToString@SqlGenerator@StructuredQuery1@@UEAAJPEB_WKHPEAPEA_W@Z
    virtual long GenerateFromStringToString(wchar_t const *, unsigned long, int, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateFromValueToString@SqlGenerator@StructuredQuery1@@UEAAJPEBUtagPROPVARIANT@@W4PROPDESC_FORMAT_FLAGS@@PEAPEA_W@Z
    virtual long GenerateFromValueToString(tagPROPVARIANT const *, int, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateSqlFromCondition@SqlGenerator@StructuredQuery1@@UEAAJPEAUICondition@@W4SQL_GENERATION_OPTIONS@@PEAPEA_W@Z
    virtual long GenerateSqlFromCondition(ICondition *, int, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@SqlGenerator@StructuredQuery1@@UEAAJPEAUISchemaProvider@@@Z
    virtual long Initialize(ISchemaProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeEx@SqlGenerator@StructuredQuery1@@UEAAJPEAUIVirtualPropertyArray@@@Z
    virtual long InitializeEx(IVirtualPropertyArray *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SqlGenerator@StructuredQuery1@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SqlGenerator@StructuredQuery1@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExternalProviderList@SqlGenerator@StructuredQuery1@@UEAAJPEAPEB_WI@Z
    virtual long SetExternalProviderList(wchar_t const * *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMostRelevantProperties@SqlGenerator@StructuredQuery1@@UEAAJPEB_W@Z
    virtual long SetMostRelevantProperties(wchar_t const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOption@SqlGenerator@StructuredQuery1@@UEAAJW4tagSQL_GENERATOR_OPTION@@PEBUtagPROPVARIANT@@@Z
    virtual long SetOption(int, tagPROPVARIANT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetQueryGenerationFlags@SqlGenerator@StructuredQuery1@@UEAAJW4__MIDL___MIDL_itf_searchprivateapi_0000_0005_0001@@@Z
    virtual long SetQueryGenerationFlags(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRemoteClient@SqlGenerator@StructuredQuery1@@UEAAJH@Z
    virtual long SetRemoteClient(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransformationForProperty@SqlGenerator@StructuredQuery1@@UEAAJPEB_WPEAUIConditionTransformer@@@Z
    virtual long SetTransformationForProperty(wchar_t const *, IConditionTransformer *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransformationForPropertyEx@SqlGenerator@StructuredQuery1@@UEAAJAEBU_tagpropertykey@@PEAUIConditionTransformer2@@@Z
    virtual long SetTransformationForPropertyEx(_tagpropertykey const &, IConditionTransformer2*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransformationForType@SqlGenerator@StructuredQuery1@@UEAAJPEB_WPEAUIConditionTransformer@@@Z
    virtual long SetTransformationForType(wchar_t const *, IConditionTransformer *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWinRTDataModel@SqlGenerator@StructuredQuery1@@UEAAJH@Z
    virtual long SetWinRTDataModel(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyTransformation@SqlGenerator@StructuredQuery1@@AEAAJPEAUICondition2@@W4SQL_GENERATION_OPTIONS@@PEAPEAU3@PEA_N@Z
    long ApplyTransformation(ICondition2*, int, ICondition2* *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineProperty@SqlGenerator@StructuredQuery1@@AEAAJAEBU_tagpropertykey@@PEAVVirtualPropertyMap@2@PEA_NPEAPEA_W@Z
    long DetermineProperty(_tagpropertykey const &, WindissectOpaque *, bool *, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateFromCondition@SqlGenerator@StructuredQuery1@@AEAAJPEAUICondition2@@W4SQL_GENERATION_OPTIONS@@PEA_W_KPEAPEA_WPEA_K@Z
    long GenerateFromCondition(ICondition2*, int, wchar_t *, uint64_t, wchar_t * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateFromString@SqlGenerator@StructuredQuery1@@AEAAJPEB_WKHPEA_W_KPEAPEA_WPEA_K@Z
    long GenerateFromString(wchar_t const *, unsigned long, int, wchar_t *, uint64_t, wchar_t * *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLCID@SqlGenerator@StructuredQuery1@@AEAAKPEAUICondition2@@@Z
    unsigned long GetLCID(ICondition2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeTrueFalseCondition@SqlGenerator@StructuredQuery1@@AEAAJ_NPEAUIConditionFactory2@@PEAPEAUICondition2@@@Z
    long MakeTrueFalseCondition(bool, IConditionFactory2*, ICondition2* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareSql@SqlGenerator@StructuredQuery1@@AEAAJPEAUICondition2@@W4SQL_GENERATION_OPTIONS@@_NPEAVVirtualPropertyMap@2@PEAUIConditionFactory2@@PEAPEAU3@@Z
    long PrepareSql(ICondition2*, int, bool, WindissectOpaque *, IConditionFactory2*, ICondition2* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareSqlAnd@SqlGenerator@StructuredQuery1@@AEAAJPEAUICondition2@@W4SQL_GENERATION_OPTIONS@@_NPEAVVirtualPropertyMap@2@PEAUIConditionFactory2@@PEAPEAU3@@Z
    long PrepareSqlAnd(ICondition2*, int, bool, WindissectOpaque *, IConditionFactory2*, ICondition2* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareSqlAndOr@SqlGenerator@StructuredQuery1@@AEAAJPEAUICondition2@@W4tagCONDITION_TYPE@@W4SQL_GENERATION_OPTIONS@@_NPEAVVirtualPropertyMap@2@PEAUIConditionFactory2@@PEAPEAU3@@Z
    long PrepareSqlAndOr(ICondition2*, int, int, bool, WindissectOpaque *, IConditionFactory2*, ICondition2* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareSqlLeaf@SqlGenerator@StructuredQuery1@@AEAAJPEAUICondition2@@W4SQL_GENERATION_OPTIONS@@_NPEAVVirtualPropertyMap@2@PEAUIConditionFactory2@@PEAPEAU3@@Z
    long PrepareSqlLeaf(ICondition2*, int, bool, WindissectOpaque *, IConditionFactory2*, ICondition2* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareSqlNot@SqlGenerator@StructuredQuery1@@AEAAJPEAUICondition2@@W4SQL_GENERATION_OPTIONS@@_NPEAVVirtualPropertyMap@2@PEAUIConditionFactory2@@PEAPEAU3@@Z
    long PrepareSqlNot(ICondition2*, int, bool, WindissectOpaque *, IConditionFactory2*, ICondition2* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransformation@SqlGenerator@StructuredQuery1@@AEAAJAEBU_tagpropertykey@@PEAUIUnknown@@@Z
    long SetTransformation(_tagpropertykey const &, IUnknown *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SqlGenerator@StructuredQuery1@@AEAA@XZ
    SqlGenerator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteApplicationSpecific@SqlGenerator@StructuredQuery1@@AEAAJPEA_W_K_NAEBUtagPROPVARIANT@@PEAPEA_WPEA_K@Z
    long WriteApplicationSpecific(wchar_t *, uint64_t, bool, tagPROPVARIANT const &, wchar_t * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteContainsWithSemanticAndCloudSplitting@SqlGenerator@StructuredQuery1@@AEAAJPEA_W_KHPEB_WKW4INDEXER_QUERY_OPTIONS@@W4tagMERGE_STRATEGY@@PEAUIObjectArray@@W4SQL_GENERATION_OPTIONS@@_N2PEAPEA_WPEA_K@Z
    long WriteContainsWithSemanticAndCloudSplitting(wchar_t *, uint64_t, int, wchar_t const *, unsigned long, int, int, IObjectArray *, int, bool, wchar_t const *, wchar_t * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteFullText@SqlGenerator@StructuredQuery1@@AEAAJPEA_W_K_N2W4RANKING_COERCION@2@K2W4SQL_GENERATION_OPTIONS@@2AEBU_tagpropertykey@@PEB_WPEBUPHRASE_QUERY_RECORD@2@KPEAVVirtualPropertyMap@2@6PEAPEA_WPEA_K@Z
    long WriteFullText(wchar_t *, uint64_t, bool, bool, int, unsigned long, bool, int, bool, _tagpropertykey const &, wchar_t const *, WindissectOpaque const *, unsigned long, WindissectOpaque *, wchar_t const *, wchar_t * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteLike@SqlGenerator@StructuredQuery1@@AEAAJPEA_W_K_N2PEB_W33AEBUtagPROPVARIANT@@PEAPEA_WPEA_K@Z
    long WriteLike(wchar_t *, uint64_t, bool, bool, wchar_t const *, wchar_t const *, wchar_t const *, tagPROPVARIANT const &, wchar_t * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteSemanticSearchContains@SqlGenerator@StructuredQuery1@@AEAAJPEA_W_K_NPEB_W2KW4tagMERGE_STRATEGY@@PEAPEA_WPEA_K@Z
    long WriteSemanticSearchContains(wchar_t *, uint64_t, bool, wchar_t const *, bool, unsigned long, int, wchar_t * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteSql@SqlGenerator@StructuredQuery1@@AEAAJPEA_W_KPEAUICondition2@@HW4SQL_GENERATION_OPTIONS@@_NPEAVVirtualPropertyMap@2@4PEAPEA_WPEA_K@Z
    long WriteSql(wchar_t *, uint64_t, ICondition2*, int, int, bool, WindissectOpaque *, bool, wchar_t * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteSqlAndOr@SqlGenerator@StructuredQuery1@@AEAAJPEA_W_KPEAUICondition2@@HPEB_W_NHW4SQL_GENERATION_OPTIONS@@4PEAVVirtualPropertyMap@2@4PEAPEA_WPEA_K@Z
    long WriteSqlAndOr(wchar_t *, uint64_t, ICondition2*, int, wchar_t const *, bool, int, int, bool, WindissectOpaque *, bool, wchar_t * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteSqlLeaf@SqlGenerator@StructuredQuery1@@AEAAJPEA_W_KPEAUICondition2@@HW4SQL_GENERATION_OPTIONS@@_NPEAVVirtualPropertyMap@2@4PEAPEA_WPEA_K@Z
    long WriteSqlLeaf(wchar_t *, uint64_t, ICondition2*, int, int, bool, WindissectOpaque *, bool, wchar_t * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteSqlNot@SqlGenerator@StructuredQuery1@@AEAAJPEA_W_KPEAUICondition2@@HW4SQL_GENERATION_OPTIONS@@_NPEAVVirtualPropertyMap@2@4PEAPEA_WPEA_K@Z
    long WriteSqlNot(wchar_t *, uint64_t, ICondition2*, int, int, bool, WindissectOpaque *, bool, wchar_t * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteValueComparison@SqlGenerator@StructuredQuery1@@AEAAJPEA_W_K_N2G2PEB_W33AEBUtagPROPVARIANT@@PEAPEA_WPEA_K@Z
    long WriteValueComparison(wchar_t *, uint64_t, bool, bool, unsigned short, bool, wchar_t const *, wchar_t const *, wchar_t const *, tagPROPVARIANT const &, wchar_t * *, uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SqlGenerator@StructuredQuery1@@AEAA@XZ
    ~SqlGenerator();
};
} // namespace StructuredQuery1
