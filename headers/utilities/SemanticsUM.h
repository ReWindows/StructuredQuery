#pragma once
#include "../windissect_forwards.h"

// Reconstructed from StructuredQuery.dll by Windissect. 7 member(s).
class SemanticsUM {
public:
    class CompoundCondition;
    class CultureState;
    class CustomProperty;
    class EmbeddedInterval;
    class Entity;
    class EntityCondition;
    class EntityConditionLL;
    class EntityIndicator;
    class Fragment;
    class FragmentSet;
    class FragmentTemplate;
    class ICompoundCondition;
    class IEntity;
    class IEntityCondition;
    class IMetaData;
    class INamedEntity;
    class INamedEntityCollection;
    class IRelationship;
    class ISemanticCondition;
    class ISemanticError;
    class IToken;
    class ITokenCollection;
    class IValueCondition;
    class Interval;
    class Keyword;
    class Lattice;
    class MetaData;
    class NamedEntity;
    class NamedEntityCollectionUM;
    class NamedEntityUM;
    class PathNode;
    class Relationship;
    class SchemaBinary;
    class SchemaEngine;
    class SemLite;
    class SemSolution;
    class SemSolutionLL;
    class SemSolutionManager;
    class SemStack;
    class SemStackNode;
    class SemanticCondition;
    class SemanticError;
    class SimpleSequentialStream;
    class StructuredSemanticSolution;
    class StructuredSemanticSolutionMaker;
    class Syntax;
    class TimeInfo;
    class TokenCollectionUM;
    class TokenFragmentStatistics;
    class TokenUM;
    class TrieNode;
    class ValueCondition;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyFilteredString@SemanticsUM@@YAJW4CHARACTER_FILTER@@PEBUKEYWORDLEXICALDATA@@PEAU3@@Z
    long CopyFilteredString(int, KEYWORDLEXICALDATA const *, KEYWORDLEXICALDATA *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyTokens@SemanticsUM@@YAJPEB_WAEBVITokenCollection@1@HHHPEAPEA_W@Z
    long CopyTokens(wchar_t const *, WindissectOpaque const &, int, int, int, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTokenSpan@SemanticsUM@@YAJKKPEBVITokenCollection@1@PEAK1@Z
    long FindTokenSpan(unsigned long, unsigned long, WindissectOpaque const *, unsigned long *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringFlags@SemanticsUM@@YAJPEB_WKPEAPEAG@Z
    long GetStringFlags(wchar_t const *, unsigned long, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeInterval@SemanticsUM@@YAJPEB_W0PEAPEA_W@Z
    long MakeInterval(wchar_t const *, wchar_t const *, wchar_t * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?size@SemanticsUM@@YAHW4TimeComponent@1@@Z
    int size(int);
};
