#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 31 member(s).
class CFormattedDateTime {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFormattedDateTime@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CFormattedDateTime@@SAJPEB_WKAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(wchar_t const *, unsigned long, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Parse@CFormattedDateTime@@UEAAJPEB_W_KPEAUDATETIMEPARSE@@@Z
    virtual long Parse(wchar_t const *, uint64_t, DATETIMEPARSE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseCanonical@CFormattedDateTime@@UEAAJPEB_W_KPEAUDATETIMEPARSE@@@Z
    virtual long ParseCanonical(wchar_t const *, uint64_t, DATETIMEPARSE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseFormat@CFormattedDateTime@@UEAAJPEB_W_K0PEAUDATETIMEPARSE@@@Z
    virtual long ParseFormat(wchar_t const *, uint64_t, wchar_t const *, DATETIMEPARSE *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFormattedDateTime@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFormattedDateTime@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Resolve@CFormattedDateTime@@UEAAJPEBUDATETIMEPARSE@@PEBU_SYSTEMTIME@@PEAUCALDATETIME@@2@Z
    virtual long Resolve(DATETIMEPARSE const *, _SYSTEMTIME const *, CALDATETIME *, CALDATETIME *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddString@CFormattedDateTime@@AEAAJPEA_WW4tagFORMAT_OPTION@@_KPEAVKeywordBuilder@@2AEA_K@Z
    long AddString(wchar_t *, int, uint64_t, KeywordBuilder *, uint64_t, uint64_t &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFormattedDateTime@@AEAA@XZ
    CFormattedDateTime();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareKeywords@CFormattedDateTime@@AEAAHPEB_W0@Z
    int CompareKeywords(wchar_t const *, wchar_t const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyToFinalTrie@CFormattedDateTime@@AEAAJPEAVKeywordBuilder@@PEAVKeyword@@_KPEA_KPEAPEAV3@3@Z
    long CopyToFinalTrie(KeywordBuilder *, Keyword *, uint64_t, uint64_t *, Keyword * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CountCalendarStringsW@CFormattedDateTime@@CAHPEA_WK0_J@Z
    static int CountCalendarStringsW(wchar_t *, unsigned long, wchar_t *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GatherKeywords@CFormattedDateTime@@AEAAJXZ
    long GatherKeywords();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCalendarStrings@CFormattedDateTime@@AEAAJKPEAPEAPEA_WPEA_K@Z
    long GetCalendarStrings(unsigned long, wchar_t * * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncrementDateTimeByOne@CFormattedDateTime@@AEAAJPEAUCALDATETIME@@K@Z
    long IncrementDateTimeByOne(CALDATETIME *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CFormattedDateTime@@AEAAJPEB_WK@Z
    long Initialize(wchar_t const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MixedSort@CFormattedDateTime@@AEAAXPEAVKeywordBuilder@@_K@Z
    void MixedSort(KeywordBuilder *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OrganizeTrie@CFormattedDateTime@@AEAAXPEAVKeywordBuilder@@_KPEA_K@Z
    void OrganizeTrie(KeywordBuilder *, uint64_t, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseDate@CFormattedDateTime@@AEAAJPEB_W_KW4DATETIME_OPTIONS@@PEAUDATETIMEPARSE@@@Z
    long ParseDate(wchar_t const *, uint64_t, int, DATETIMEPARSE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseFormatHelper@CFormattedDateTime@@AEAAJPEB_W_KPEBVFormatNode@@W4DateTimeParseOptions@@PEAUDATETIMEPARSE@@@Z
    long ParseFormatHelper(wchar_t const *, uint64_t, FormatNode const *, int, DATETIMEPARSE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseFormatSpecification@CFormattedDateTime@@CAJPEB_WPEAPEAVFormatNode@@@Z
    static long ParseFormatSpecification(wchar_t const *, FormatNode * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseKeyword@CFormattedDateTime@@AEAAJPEB_W_KW4tagFORMAT_OPTION@@PEAUDATETIMEPARSE@@PEAPEB_WPEA_K@Z
    long ParseKeyword(wchar_t const *, uint64_t, int, DATETIMEPARSE *, wchar_t const * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseNumber@CFormattedDateTime@@AEAAJPEB_W_KW4tagFORMAT_OPTION@@HW4DateTimeParseOptions@@PEAUDATETIMEPARSE@@PEAPEB_WPEA_K@Z
    long ParseNumber(wchar_t const *, uint64_t, int, int, int, DATETIMEPARSE *, wchar_t const * *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseTime@CFormattedDateTime@@AEAAJPEB_W_KW4DATETIME_OPTIONS@@PEAUDATETIMEPARSE@@@Z
    long ParseTime(wchar_t const *, uint64_t, int, DATETIMEPARSE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadCalendarInfo@CFormattedDateTime@@AEAAJKPEAPEA_W@Z
    long ReadCalendarInfo(unsigned long, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadLocaleInfo@CFormattedDateTime@@AEAAJKPEAPEA_W@Z
    long ReadLocaleInfo(unsigned long, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveCalendarStringsW@CFormattedDateTime@@CAHPEA_WK0_J@Z
    static int SaveCalendarStringsW(wchar_t *, unsigned long, wchar_t *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveDateFormatsW@CFormattedDateTime@@CAHPEA_WK_J@Z
    static int SaveDateFormatsW(wchar_t *, unsigned long, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveTimeFormatsW@CFormattedDateTime@@CAHPEA_W_J@Z
    static int SaveTimeFormatsW(wchar_t *, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFormattedDateTime@@AEAA@XZ
    ~CFormattedDateTime();
};
