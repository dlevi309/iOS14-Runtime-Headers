/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/


@class NSString, NSMutableSet;

@interface STUniquedManagedObjectDelta : NSObject {

	NSString* _uniqueIdentifier;
	long long _changeType;
	NSMutableSet* _updatedProperties;

}

@property (nonatomic,retain) NSMutableSet * updatedProperties;                //@synthesize updatedProperties=_updatedProperties - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) long long changeType;                          //@synthesize changeType=_changeType - In the implementation block
-(long long)changeType;
-(void)setUpdatedProperties:(NSMutableSet *)arg1 ;
-(NSString *)uniqueIdentifier;
-(void)deleted;
-(id)initWithUniqueIdentifier:(id)arg1 ;
-(NSMutableSet *)updatedProperties;
-(void)inserted;
-(void)removePropertyWithName:(id)arg1 ;
-(void)updatedWithProperties:(id)arg1 ;
@end

