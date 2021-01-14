/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/_MPSectionedIdentifierListEncodableNextEntriesProviding.h>
#import <libobjc.A.dylib/MPExclusiveAccessible.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue, MPSectionedIdentifierListDelegate, MPSectionedIdentifierListAnnotationDelegate;
@class NSObject, NSMutableArray, MPSectionedIdentifierListEntry, NSMutableDictionary, NSString, NSDictionary, NSSet;

@interface MPSectionedIdentifierList : NSObject <_MPSectionedIdentifierListEncodableNextEntriesProviding, MPExclusiveAccessible, NSSecureCoding> {

	long long _itemCount;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableArray* _startEntries;
	MPSectionedIdentifierListEntry* _endEntry;
	NSMutableDictionary* _sectionHeadEntryMap;
	BOOL _automaticallyReversesNonDestructiveDataSourceEdits;
	NSString* _identifier;
	id<MPSectionedIdentifierListDelegate> _delegate;
	id<MPSectionedIdentifierListAnnotationDelegate> _annotationDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=_sectionDataSources,nonatomic,readonly) NSDictionary * sectionDataSources; 
@property (assign,nonatomic,__weak) id<MPSectionedIdentifierListAnnotationDelegate> annotationDelegate;              //@synthesize annotationDelegate=_annotationDelegate - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                                                //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<MPSectionedIdentifierListDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long itemCount; 
@property (assign,nonatomic) BOOL automaticallyReversesNonDestructiveDataSourceEdits;                                //@synthesize automaticallyReversesNonDestructiveDataSourceEdits=_automaticallyReversesNonDestructiveDataSourceEdits - In the implementation block
@property (nonatomic,readonly) NSSet * allSectionIdentifiers; 
+(BOOL)supportsSecureCoding;
+(void)_performWithoutRequiringExclusivity:(/*^block*/id)arg1 ;
-(id)enumeratorWithOptions:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)hasSection:(id)arg1 ;
-(id<MPSectionedIdentifierListDelegate>)delegate;
-(void)performWithExclusiveAccess:(/*^block*/id)arg1 ;
-(id)performWithExclusiveAccessAndReturnObject:(/*^block*/id)arg1 ;
-(NSSet *)allSectionIdentifiers;
-(BOOL)performWithExclusiveAccessAndReturnBOOL:(/*^block*/id)arg1 ;
-(long long)performWithExclusiveAccessAndReturnInteger:(/*^block*/id)arg1 ;
-(void)_stitchWithPreviousEntry:(id)arg1 list:(id)arg2 cloneIndex:(id)arg3 ;
-(void)_stitchLastItemEntryToHeadEntry:(id)arg1 branchList:(id)arg2 ;
-(void)_stitchPreviousEntry:(id)arg1 toEntry:(id)arg2 cloneIndex:(id)arg3 ;
-(id)_encodeEntry:(id)arg1 withExclusiveAccessToken:(id)arg2 ;
-(BOOL)hasItem:(id)arg1 inSection:(id)arg2 ;
-(id)enumeratorWithOptions:(unsigned long long)arg1 startPosition:(id)arg2 endPosition:(id)arg3 ;
-(void)dataSourceMoveItemToHead:(id)arg1 inSection:(id)arg2 ;
-(void)addDataSource:(id)arg1 section:(id)arg2 afterHeadOfSection:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)isDeletedItem:(id)arg1 inSection:(id)arg2 ;
-(void)dataSourceMoveItem:(id)arg1 afterItem:(id)arg2 inSection:(id)arg3 ;
-(void)dataSourceMoveItemToTail:(id)arg1 inSection:(id)arg2 ;
-(void)dataSourceUpdateSection:(id)arg1 ;
-(void)_addBranchToEntry:(id)arg1 entries:(id)arg2 withExclusiveAccessToken:(id)arg3 ;
-(void)setAnnotationDelegate:(id<MPSectionedIdentifierListAnnotationDelegate>)arg1 ;
-(id)_dataSourceInsertItems:(id)arg1 fromSection:(id)arg2 afterEntry:(id)arg3 withExclusiveAccessToken:(id)arg4 ;
-(id)_dataSourceMoveItem:(id)arg1 inSection:(id)arg2 afterEntry:(id)arg3 withExclusiveAccessToken:(id)arg4 ;
-(id)_entryForPosition:(id)arg1 withExclusiveAccessToken:(id)arg2 ;
-(id)_itemEntry:(id)arg1 sectionIdentifier:(id)arg2 withExclusiveAccessToken:(id)arg3 ;
-(void)_insertDataSourceHead:(id)arg1 afterEntry:(id)arg2 withExclusiveAccessToken:(id)arg3 ;
-(void)_loadDataSource:(id)arg1 forSection:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_insertDataSource:(id)arg1 forSection:(id)arg2 afterEntry:(id)arg3 withExclusiveAccessToken:(id)arg4 ;
-(id)_startEntriesWithExclusiveAccessToken:(id)arg1 ;
-(id)_tailEntryForSectionIdentifier:(id)arg1 withExclusiveAccessToken:(id)arg2 ;
-(id)_sectionHeadEntryMapWithExclusiveAccessToken:(id)arg1 ;
-(id)_endEntryWithExclusiveAccessToken:(id)arg1 ;
-(id<MPSectionedIdentifierListAnnotationDelegate>)annotationDelegate;
-(BOOL)automaticallyReversesNonDestructiveDataSourceEdits;
-(void)setAutomaticallyReversesNonDestructiveDataSourceEdits:(BOOL)arg1 ;
-(id)encodableNextEntriesWithExclusiveAccessToken:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(long long)itemCount;
-(void)setDelegate:(id<MPSectionedIdentifierListDelegate>)arg1 ;
-(id)_sectionDataSources;
-(id)initWithCoder:(id)arg1 ;
-(id)_debugDescriptionWithEnumerator:(id)arg1 lengths:(SCD_Struct_MP71*)arg2 ;
-(id)debugDescriptionStartingAtItem:(id)arg1 inSection:(id)arg2 ;
-(NSString *)identifier;
-(void)encodeWithCoder:(id)arg1 withExclusiveAccessToken:(id)arg2 ;
-(void)addDataSourceAtStart:(id)arg1 section:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)enumeratorWithOptions:(unsigned long long)arg1 startPosition:(id)arg2 endPosition:(id)arg3 withExclusiveAccessToken:(id)arg4 ;
-(void)removeItem:(id)arg1 fromSection:(id)arg2 ;
-(void)addDataSource:(id)arg1 section:(id)arg2 afterItem:(id)arg3 inSection:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)addDataSourceAtEnd:(id)arg1 section:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addDataSource:(id)arg1 section:(id)arg2 afterTailOfSection:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)moveItem:(id)arg1 fromSection:(id)arg2 afterItem:(id)arg3 inSection:(id)arg4 ;
-(void)replaceDataSource:(id)arg1 forSection:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)moveItemToStart:(id)arg1 fromSection:(id)arg2 ;
-(void)moveItemToEnd:(id)arg1 fromSection:(id)arg2 ;
-(void)moveItem:(id)arg1 fromSection:(id)arg2 afterHeadOfSection:(id)arg3 ;
-(void)moveItem:(id)arg1 fromSection:(id)arg2 afterTailOfSection:(id)arg3 ;
-(long long)_itemCountWithExclusiveAccessToken:(id)arg1 ;
-(void)dataSourceInsertItemsAtHead:(id)arg1 inSection:(id)arg2 ;
-(void)dataSourceInsertItems:(id)arg1 afterItem:(id)arg2 inSection:(id)arg3 ;
-(void)dataSourceInsertItemsAtTail:(id)arg1 inSection:(id)arg2 ;
-(void)dataSourceRemoveItem:(id)arg1 fromSection:(id)arg2 ;
-(void)dataSourceReloadItem:(id)arg1 inSection:(id)arg2 ;
-(void)_beforeInitWithCoder:(id)arg1 ;
-(void)_enumerator:(id)arg1 didEncounterEntry:(id)arg2 withExclusiveAccessToken:(id)arg3 ;
-(void)_reverseEnumeratorWillStartAtEnd:(id)arg1 withExclusiveAccessToken:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)dealloc;
@end
