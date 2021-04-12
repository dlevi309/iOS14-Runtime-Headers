/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <libobjc.A.dylib/NSFetchedResultsControllerDelegate.h>
#import <libobjc.A.dylib/ICRDExpansionStateContextProviding.h>

@protocol ICRDCoreDataIndexerDelegate, OS_dispatch_queue;
@class NSString, NSManagedObjectContext, NSSet, NSObject;

@interface ICRDCoreDataIndexer : NSObject <NSFetchedResultsControllerDelegate, ICRDExpansionStateContextProviding> {

	BOOL _shouldIncludeOutlineParentItems;
	id<ICRDCoreDataIndexerDelegate> _delegate;
	NSManagedObjectContext* _legacyManagedObjectContext;
	NSManagedObjectContext* _modernManagedObjectContext;
	id _firstRelevantItemIdentifier;
	NSSet* _activeFetchedResultsControllers;
	NSObject*<OS_dispatch_queue> _reloadDataSerialQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> reloadDataSerialQueue;                 //@synthesize reloadDataSerialQueue=_reloadDataSerialQueue - In the implementation block
@property (assign,nonatomic,__weak) id<ICRDCoreDataIndexerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * legacyManagedObjectContext;              //@synthesize legacyManagedObjectContext=_legacyManagedObjectContext - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * modernManagedObjectContext;              //@synthesize modernManagedObjectContext=_modernManagedObjectContext - In the implementation block
@property (nonatomic,readonly) id firstRelevantItemIdentifier;                                   //@synthesize firstRelevantItemIdentifier=_firstRelevantItemIdentifier - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeOutlineParentItems;                               //@synthesize shouldIncludeOutlineParentItems=_shouldIncludeOutlineParentItems - In the implementation block
@property (nonatomic,readonly) NSSet * activeFetchedResultsControllers;                          //@synthesize activeFetchedResultsControllers=_activeFetchedResultsControllers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * expansionStateContext; 
-(id<ICRDCoreDataIndexerDelegate>)delegate;
-(void)setDelegate:(id<ICRDCoreDataIndexerDelegate>)arg1 ;
-(void)controller:(id)arg1 didChangeContentWithDifference:(id)arg2 ;
-(void)reloadData:(/*^block*/id)arg1 ;
-(NSString *)expansionStateContext;
-(void)indexObjectsWithCompletion:(/*^block*/id)arg1 ;
-(id)firstRelevantItemIdentifier;
-(id)nextRelevantItemIdentifierAfter:(id)arg1 ;
-(id)newSnapshotFromIndex;
-(id)sectionSnapshotsForSectionControllerType:(unsigned long long)arg1 ;
-(id)sectionIdentifiersForSectionControllerType:(unsigned long long)arg1 ;
-(id)initWithLegacyManagedObjectContext:(id)arg1 modernManagedObjectContext:(id)arg2 ;
-(void)setShouldIncludeOutlineParentItems:(BOOL)arg1 ;
-(void)clearIndex;
-(NSSet *)activeFetchedResultsControllers;
-(void)indexObjectsInSection:(id)arg1 sectionIndex:(unsigned long long)arg2 fetchedResultsController:(id)arg3 ;
-(BOOL)shouldIncludeOutlineParentItems;
-(NSManagedObjectContext *)modernManagedObjectContext;
-(NSManagedObjectContext *)legacyManagedObjectContext;
-(id)sectionIdentifierForHeaderInSection:(long long)arg1 ;
-(void)deleteWithDecisionController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)reloadDataSerialQueue;
-(void)unsafelyReloadData:(/*^block*/id)arg1 ;
-(void)unsafelyIndexAllObjectsForFetchedResultsController:(id)arg1 ;
-(void)performAndWaitForFetchedResultsControllers:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)activeManagedObjectContexts;
-(void)reloadDataAndWait;
-(void)setReloadDataSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
