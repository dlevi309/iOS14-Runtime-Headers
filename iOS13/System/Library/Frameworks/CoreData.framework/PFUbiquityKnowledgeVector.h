/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface PFUbiquityKnowledgeVector : NSObject <NSCoding, NSCopying, NSSecureCoding> {

	NSDictionary* _kv;
	NSDictionary* _storeKVDict;
	unsigned long long _hash;

}

@property (nonatomic,readonly) unsigned long long hash;                //@synthesize hash=_hash - In the implementation block
@property (nonatomic,readonly) unsigned long long length; 
+(BOOL)supportsSecureCoding;
+(id)createSetOfAllPeerIDsInKnowledgeVectors:(id)arg1 ;
+(id)createKnowledgeVectorDictionaryFromString:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)length;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)transactionNumberForPeerID:(id)arg1 ;
-(id)initWithStoreKnowledgeVectorDictionary:(id)arg1 ;
-(void)updateWithKnowledgeVector:(id)arg1 ;
-(BOOL)isZeroVector;
-(BOOL)isAncestorOfKnowledgeVector:(id)arg1 ;
-(id)allPeerIDs;
-(BOOL)conflictsWithKnowledgeVector:(id)arg1 ;
-(id)createStoreKnowledgeVectorDictionary;
-(id)newKnowledgeVectorByDecrementingPeerWithID:(id)arg1 ;
-(id)createKnowledgeVectorString;
-(id)newKnowledgeVectorBySubtractingVector:(id)arg1 ;
-(id)initWithKnowledgeVectorDictionary:(id)arg1 ;
-(id)newKnowledgeVectorByAddingKnowledgeVector:(id)arg1 ;
-(id)createAncestorVectorForConflictingVector:(id)arg1 ;
-(id)newKnowledgeVectorByIncrementingPeerWithID:(id)arg1 ;
-(id)createSetOfAllPeerIDsWithOtherVector:(id)arg1 ;
-(void)_updateHash;
-(id)initFromCopy:(id)arg1 storeKVDict:(id)arg2 hash:(unsigned long long)arg3 ;
-(id)initWithKnowledgeVectorDictionary:(id)arg1 andStoreKnowledgeVectorDictionary:(id)arg2 ;
-(id)initWithKnowledgeVectorString:(id)arg1 ;
-(BOOL)hasPeerIDInCommonWith:(id)arg1 ;
-(BOOL)isDescendantOfKnowledgeVector:(id)arg1 ;
-(void)decrementToMinimumWithKnowledgeVector:(id)arg1 ;
-(BOOL)canMergeWithKnowledgeVector:(id)arg1 ;
@end

