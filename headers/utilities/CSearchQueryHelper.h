#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 46 member(s).
class CSearchQueryHelper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSearchQueryHelper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CSearchQueryHelper@@SAJPEB_WAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(wchar_t const *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateSQLFromUserQuery@CSearchQueryHelper@@UEAAJPEB_WPEAPEA_W@Z
    virtual long GenerateSQLFromUserQuery(wchar_t const *, wchar_t * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSearchQueryHelper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSearchQueryHelper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteProperties@CSearchQueryHelper@@UEAAJJKPEAU_tagpropertykey@@PEAU_SEARCH_COLUMN_PROPERTIES@@PEAU_FILETIME@@@Z
    virtual long WriteProperties(long, unsigned long, _tagpropertykey *, _SEARCH_COLUMN_PROPERTIES *, _FILETIME *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ConnectionString@CSearchQueryHelper@@UEAAJPEAPEA_W@Z
    virtual long get_ConnectionString(wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QueryContentLocale@CSearchQueryHelper@@UEAAJPEAK@Z
    virtual long get_QueryContentLocale(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QueryContentProperties@CSearchQueryHelper@@UEAAJPEAPEA_W@Z
    virtual long get_QueryContentProperties(wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QueryGenerationFlags@CSearchQueryHelper@@UEAAJPEAW4__MIDL___MIDL_itf_searchprivateapi_0000_0005_0001@@@Z
    virtual long get_QueryGenerationFlags(int*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QueryKeywordLocale@CSearchQueryHelper@@UEAAJPEAK@Z
    virtual long get_QueryKeywordLocale(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QueryMaxResults@CSearchQueryHelper@@UEAAJPEAJ@Z
    virtual long get_QueryMaxResults(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QueryMostRelevantProperties@CSearchQueryHelper@@UEAAJPEAPEA_W@Z
    virtual long get_QueryMostRelevantProperties(wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QuerySelectColumns@CSearchQueryHelper@@UEAAJPEAPEA_W@Z
    virtual long get_QuerySelectColumns(wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QuerySorting@CSearchQueryHelper@@UEAAJPEAPEA_W@Z
    virtual long get_QuerySorting(wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QuerySyntax@CSearchQueryHelper@@UEAAJPEAW4_SEARCH_QUERY_SYNTAX@@@Z
    virtual long get_QuerySyntax(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QueryTermExpansion@CSearchQueryHelper@@UEAAJPEAW4_SEARCH_TERM_EXPANSION@@@Z
    virtual long get_QueryTermExpansion(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QueryWhereRestrictions@CSearchQueryHelper@@UEAAJPEAPEA_W@Z
    virtual long get_QueryWhereRestrictions(wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_QueryContentLocale@CSearchQueryHelper@@UEAAJK@Z
    virtual long put_QueryContentLocale(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_QueryContentProperties@CSearchQueryHelper@@UEAAJPEB_W@Z
    virtual long put_QueryContentProperties(wchar_t const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_QueryGenerationFlags@CSearchQueryHelper@@UEAAJW4__MIDL___MIDL_itf_searchprivateapi_0000_0005_0001@@@Z
    virtual long put_QueryGenerationFlags(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_QueryKeywordLocale@CSearchQueryHelper@@UEAAJK@Z
    virtual long put_QueryKeywordLocale(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_QueryMaxResults@CSearchQueryHelper@@UEAAJJ@Z
    virtual long put_QueryMaxResults(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_QueryMostRelevantProperties@CSearchQueryHelper@@UEAAJPEB_W@Z
    virtual long put_QueryMostRelevantProperties(wchar_t const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_QuerySelectColumns@CSearchQueryHelper@@UEAAJPEB_W@Z
    virtual long put_QuerySelectColumns(wchar_t const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_QuerySorting@CSearchQueryHelper@@UEAAJPEB_W@Z
    virtual long put_QuerySorting(wchar_t const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_QuerySyntax@CSearchQueryHelper@@UEAAJW4_SEARCH_QUERY_SYNTAX@@@Z
    virtual long put_QuerySyntax(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_QueryTermExpansion@CSearchQueryHelper@@UEAAJW4_SEARCH_TERM_EXPANSION@@@Z
    virtual long put_QueryTermExpansion(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_QueryWhereRestrictions@CSearchQueryHelper@@UEAAJPEB_W@Z
    virtual long put_QueryWhereRestrictions(wchar_t const *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSearchQueryHelper@@AEAA@XZ
    CSearchQueryHelper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CoAllocStringCheck@CSearchQueryHelper@@CAJPEB_WPEAPEA_W@Z
    static long _CoAllocStringCheck(wchar_t const *, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CoAllocStringOpt@CSearchQueryHelper@@CAJPEB_WPEAPEA_W@Z
    static long _CoAllocStringOpt(wchar_t const *, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CoAllocStringOptCheck@CSearchQueryHelper@@CAJPEB_WPEAPEA_W@Z
    static long _CoAllocStringOptCheck(wchar_t const *, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExpandAndAddProperty@CSearchQueryHelper@@AEAAJAEBU_tagpropertykey@@PEAUIVirtualPropertyArray@@PEAPEA_W_KPEA_K@Z
    long _ExpandAndAddProperty(_tagpropertykey const &, IVirtualPropertyArray *, wchar_t * *, uint64_t, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GatherColumns@CSearchQueryHelper@@AEAAJPEAUICondition2@@PEAUIVirtualPropertyArray@@PEAPEA_W_KPEA_K@Z
    long _GatherColumns(ICondition2*, IVirtualPropertyArray *, wchar_t * *, uint64_t, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GatherColumnsAndOr@CSearchQueryHelper@@AEAAJPEAUICondition2@@PEAUIVirtualPropertyArray@@PEAPEA_W_KPEA_K@Z
    long _GatherColumnsAndOr(ICondition2*, IVirtualPropertyArray *, wchar_t * *, uint64_t, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GatherColumnsLeaf@CSearchQueryHelper@@AEAAJPEAUICondition2@@PEAUIVirtualPropertyArray@@PEAPEA_W_KPEA_K@Z
    long _GatherColumnsLeaf(ICondition2*, IVirtualPropertyArray *, wchar_t * *, uint64_t, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GatherColumnsNot@CSearchQueryHelper@@AEAAJPEAUICondition2@@PEAUIVirtualPropertyArray@@PEAPEA_W_KPEA_K@Z
    long _GatherColumnsNot(ICondition2*, IVirtualPropertyArray *, wchar_t * *, uint64_t, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GenerateSql@CSearchQueryHelper@@AEAAJPEAUICondition@@PEAUIVirtualPropertyArray@@PEA_W_K@Z
    long _GenerateSql(ICondition *, IVirtualPropertyArray *, wchar_t *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetInitializedQueryParser@CSearchQueryHelper@@AEAAJPEB_WGKW4tagSTRUCTURED_QUERY_SYNTAX@@H0AEBU_GUID@@PEAPEAX@Z
    long _GetInitializedQueryParser(wchar_t const *, unsigned short, unsigned long, int, int, wchar_t const *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetInitializedSqlGenerator@CSearchQueryHelper@@AEAAJPEAUIVirtualPropertyArray@@AEBU_GUID@@PEAPEAX@Z
    long _GetInitializedSqlGenerator(IVirtualPropertyArray *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeDefaultStringProperty@CSearchQueryHelper@@AEAAJPEAUIQueryParser2@@PEB_W@Z
    long _InitializeDefaultStringProperty(IQueryParser2*, wchar_t const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsEmptyString@CSearchQueryHelper@@CAHPEB_W@Z
    static int _IsEmptyString(wchar_t const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ParseStringList@CSearchQueryHelper@@AEAAJPEB_W_KPEAPEA_W1PEA_K@Z
    long _ParseStringList(wchar_t const *, uint64_t, wchar_t * *, uint64_t, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WriteColumns@CSearchQueryHelper@@AEAAJPEBQEB_W_KPEA_W1PEAPEA_WPEA_K@Z
    long _WriteColumns(wchar_t const * const *, uint64_t, wchar_t *, uint64_t, wchar_t * *, uint64_t *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSearchQueryHelper@@AEAA@XZ
    ~CSearchQueryHelper();
};
