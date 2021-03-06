/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/CRCoding.h>
#import <libobjc.A.dylib/CRUndoDelegate.h>
#import <libobjc.A.dylib/CRDataType.h>

@protocol CRUndoDelegate;
@class NSMutableOrderedSet, NSMapTable, CRDocument, NSObject, CRArray, CRSet, NSString;

@interface CRTombstoneOrderedSet : NSObject <CRCoding, CRUndoDelegate, CRDataType> {

	NSMutableOrderedSet* _cachedIdentifierSet;
	NSMapTable* _cachedIndexMapping;
	CRDocument* _document;
	NSObject*<CRUndoDelegate> _delegate;
	CRArray* _ordering;
	CRSet* _elements;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSMutableOrderedSet * cachedIdentifierSet;              //@synthesize cachedIdentifierSet=_cachedIdentifierSet - In the implementation block
@property (nonatomic,readonly) NSMapTable * cachedIndexMapping;                        //@synthesize cachedIndexMapping=_cachedIndexMapping - In the implementation block
@property (nonatomic,retain) CRArray * ordering;                                       //@synthesize ordering=_ordering - In the implementation block
@property (nonatomic,retain) CRSet * elements;                                         //@synthesize elements=_elements - In the implementation block
@property (assign,nonatomic,__weak) CRDocument * document;                             //@synthesize document=_document - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<CRUndoDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
-(void)setElements:(CRSet *)arg1 ;
-(CRSet *)elements;
-(id)init;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)deltaSince:(id)arg1 in:(id)arg2 ;
-(NSObject*<CRUndoDelegate>)delegate;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setDocument:(CRDocument *)arg1 ;
-(void)enumerateObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)moveClock;
-(void)realizeLocalChangesIn:(id)arg1 ;
-(unsigned long long)count;
-(void)mergeWith:(id)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)setDelegate:(NSObject*<CRUndoDelegate>)arg1 ;
-(void)encodeWithCRCoder:(id)arg1 orderedSet:(OrderedSet*)arg2 ;
-(id)initWithCRCoder:(id)arg1 orderedSet:(const OrderedSet*)arg2 ;
-(id)initWithOrdering:(id)arg1 elements:(id)arg2 document:(id)arg3 ;
-(void)wipeoutCaches;
-(NSMutableOrderedSet *)cachedIdentifierSet;
-(void)regenerateNSOrderedIdentifierSetAndIndexMapping;
-(id)generateNSOrderedIdentifierSetWithIndexMapping:(id)arg1 ;
-(NSMapTable *)cachedIndexMapping;
-(id)identifierForObjectInCachedSet:(id)arg1 ;
-(void)shiftCachedIndicesStartingAtIndex:(unsigned long long)arg1 by:(long long)arg2 ;
-(void)_removeObjectsFromOrderingAtIndices:(id)arg1 ;
-(NSString *)description;
-(void)undoablyRemoveObjectIdentifiersFromElements:(id)arg1 ;
-(void)undoablyInsertObjectIdentifiersIntoElements:(id)arg1 ;
-(void)moveObjectFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 mutableSafe:(BOOL)arg3 ;
-(void)reinsertIdentifier:(id)arg1 withMaskedIdentifiers:(id)arg2 atIndex:(unsigned long long)arg3 forObjectToMove:(id)arg4 ;
-(BOOL)containsObjectEqualTo:(id)arg1 ;
-(void)realizeElementMutations;
-(void)addObject:(id)arg1 ;
-(id)initWithDocument:(id)arg1 ;
-(void)safeMoveObjectFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)setOrdering:(CRArray *)arg1 ;
-(void)walkGraph:(/*^block*/id)arg1 ;
-(id)objectForIdentifier:(id)arg1 ;
-(unsigned long long)hash;
-(CRArray *)ordering;
-(unsigned long long)indexOfEqualObject:(id)arg1 ;
-(CRDocument *)document;
-(id)tombstone;
-(id)initWithCRCoder:(id)arg1 ;
-(void)moveObjectFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)addUndoCommandsForObject:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)wantsUndoCommands;
-(void)encodeWithCRCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

