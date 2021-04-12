/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <libobjc.A.dylib/CLSPredicateValueNormalizer.h>
#import <libobjc.A.dylib/CLSChangeNotifiable.h>

@class NSString, NSPredicate, NSArray, CLSDataStore;

@interface CLSDataObserver : NSObject <CLSPredicateValueNormalizer, CLSChangeNotifiable> {

	BOOL _invalidated;
	Class _objectType;
	NSString* _observerID;
	NSPredicate* _predicate;
	NSArray* _sortDescriptors;
	/*^block*/id _dataChanged;
	CLSDataStore* _dataStore;
	unsigned long long _changeTag;

}

@property (assign,nonatomic,__weak) CLSDataStore * dataStore;              //@synthesize dataStore=_dataStore - In the implementation block
@property (nonatomic,readonly) NSString * className; 
@property (getter=isInvalidated) BOOL invalidated;                         //@synthesize invalidated=_invalidated - In the implementation block
@property (assign) unsigned long long changeTag;                           //@synthesize changeTag=_changeTag - In the implementation block
@property (nonatomic,readonly) Class objectType;                           //@synthesize objectType=_objectType - In the implementation block
@property (nonatomic,readonly) NSString * observerID;                      //@synthesize observerID=_observerID - In the implementation block
@property (nonatomic,readonly) NSPredicate * predicate;                    //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) NSArray * sortDescriptors;                      //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (nonatomic,copy) id dataChanged;                                 //@synthesize dataChanged=_dataChanged - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)predicateForObjectsWithIdentifier:(id)arg1 ;
+(id)predicateForObjectsWithParentObjectID:(id)arg1 andRole:(unsigned long long)arg2 ;
+(id)predicateForObjectsWithObjectIDs:(id)arg1 ;
+(id)predicateForObjectsWithParentObjectID:(id)arg1 ;
+(id)predicateForObjectWithObjectID:(id)arg1 ;
+(id)predicateForObjectsWithPersonID:(id)arg1 andRole:(unsigned long long)arg2 ;
+(id)predicateForCollaborationStateForObjectWithID:(id)arg1 ownerPersonID:(id)arg2 domain:(long long)arg3 ;
+(id)predicateForCollaborationStatesForObjectWithID:(id)arg1 ;
+(id)predicateForCollaborationStatesForObjectWithID:(id)arg1 ownerPersonID:(id)arg2 ;
+(id)predicateForCollaborationStatesForObjectWithID:(id)arg1 domain:(long long)arg2 ;
-(id)init;
-(NSString *)description;
-(NSPredicate *)predicate;
-(NSArray *)sortDescriptors;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(void)reset;
-(BOOL)isInvalidated;
-(NSString *)className;
-(Class)objectType;
-(id)dataChanged;
-(void)setDataChanged:(id)arg1 ;
-(void)setInvalidated:(BOOL)arg1 ;
-(CLSDataStore *)dataStore;
-(void)setDataStore:(CLSDataStore *)arg1 ;
-(oneway void)clientRemote_invalidate;
-(id)initWithObjectType:(Class)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 error:(id*)arg4 ;
-(oneway void)clientRemote_itemChanged:(unsigned long long)arg1 ;
-(NSString *)observerID;
-(unsigned long long)changeTag;
-(id)initWithObjectType:(Class)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 ;
-(id)normalizeKeyPath:(id)arg1 forValue:(id)arg2 ;
-(id)normalizedValue:(id)arg1 forKeyPath:(id)arg2 ;
-(void)setChangeTag:(unsigned long long)arg1 ;
@end
