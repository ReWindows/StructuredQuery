#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 12 member(s).
class CDelayedInitReplayingWordBreaker {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BreakText@CDelayedInitReplayingWordBreaker@@UEAAJPEAUtagTEXT_SOURCE@@PEAUIWordSink@@PEAUIPhraseSink@@@Z
    virtual long BreakText(tagTEXT_SOURCE *, IWordSink *, IPhraseSink *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDelayedInitReplayingWordBreaker@@QEAA@AEBU_GUID@@PEAUIBorrowedWordBreaker@@@Z
    CDelayedInitReplayingWordBreaker(_GUID const &, IBorrowedWordBreaker *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComposePhrase@CDelayedInitReplayingWordBreaker@@UEAAJPEB_WK0KKPEA_WPEAK@Z
    virtual long ComposePhrase(wchar_t const *, unsigned long, wchar_t const *, unsigned long, unsigned long, wchar_t *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLicenseToUse@CDelayedInitReplayingWordBreaker@@UEAAJPEAPEB_W@Z
    virtual long GetLicenseToUse(wchar_t const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CDelayedInitReplayingWordBreaker@@UEAAJHKPEAH@Z
    virtual long Init(int, unsigned long, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeAsNeeded@CDelayedInitReplayingWordBreaker@@UEAAJHK@Z
    virtual long InitializeAsNeeded(int, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDelayedInitReplayingWordBreaker@@UEAA@XZ
    virtual ~CDelayedInitReplayingWordBreaker();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Cache@CDelayedInitReplayingWordBreaker@@AEAAJPEB_WAEAV?$CCoSimpleArray@UWordbreakerReplayData@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@UWordbreakerReplayData@@@@@@@Z
    long _Cache(wchar_t const *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CaptureBreakText@CDelayedInitReplayingWordBreaker@@AEAAJPEAUtagTEXT_SOURCE@@AEAV?$CCoSimpleArray@UWordbreakerReplayData@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@UWordbreakerReplayData@@@@@@@Z
    long _CaptureBreakText(tagTEXT_SOURCE *, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CloneReplayDataArray@CDelayedInitReplayingWordBreaker@@AEAAJAEBV?$CCoSimpleArray@UWordbreakerReplayData@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@UWordbreakerReplayData@@@@@@AEAV2@@Z
    long _CloneReplayDataArray(WindissectOpaque const &, WindissectOpaque &);
};
