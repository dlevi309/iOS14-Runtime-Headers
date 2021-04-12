/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <ShareSheet/ShareSheet-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString;

@interface UISUIActivityConfiguration : NSObject <NSSecureCoding> {

	BOOL _activitySupportsPromiseURLs;
	BOOL _appIsDocumentTypeOwner;
	BOOL _isCapabilityBasedActivity;
	NSUUID* _activityUUID;
	long long _activityCategory;
	NSString* _activityType;
	NSString* _fallbackActivityType;
	long long _defaultSortGroup;
	unsigned long long _indexInApplicationDefinedActivities;
	NSString* _overrideTitle;
	NSString* _defaultActivityTitle;
	NSString* _positionBeforeActivityType;
	NSString* _activityClassName;
	long long _encodingType;
	CGSize _preferredThumbnailSize;

}

@property (nonatomic,retain) NSString * activityClassName;                                          //@synthesize activityClassName=_activityClassName - In the implementation block
@property (assign,nonatomic) long long encodingType;                                                //@synthesize encodingType=_encodingType - In the implementation block
@property (nonatomic,retain) NSString * overrideTitle;                                              //@synthesize overrideTitle=_overrideTitle - In the implementation block
@property (assign,nonatomic) BOOL isCapabilityBasedActivity;                                        //@synthesize isCapabilityBasedActivity=_isCapabilityBasedActivity - In the implementation block
@property (nonatomic,readonly) NSUUID * activityUUID;                                               //@synthesize activityUUID=_activityUUID - In the implementation block
@property (nonatomic,readonly) long long activityCategory;                                          //@synthesize activityCategory=_activityCategory - In the implementation block
@property (nonatomic,readonly) NSString * activityTitle; 
@property (nonatomic,readonly) NSString * activityType;                                             //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,readonly) NSString * fallbackActivityType;                                     //@synthesize fallbackActivityType=_fallbackActivityType - In the implementation block
@property (nonatomic,readonly) CGSize preferredThumbnailSize;                                       //@synthesize preferredThumbnailSize=_preferredThumbnailSize - In the implementation block
@property (nonatomic,readonly) BOOL activitySupportsPromiseURLs;                                    //@synthesize activitySupportsPromiseURLs=_activitySupportsPromiseURLs - In the implementation block
@property (nonatomic,readonly) long long defaultSortGroup;                                          //@synthesize defaultSortGroup=_defaultSortGroup - In the implementation block
@property (nonatomic,readonly) BOOL appIsDocumentTypeOwner;                                         //@synthesize appIsDocumentTypeOwner=_appIsDocumentTypeOwner - In the implementation block
@property (nonatomic,readonly) unsigned long long indexInApplicationDefinedActivities;              //@synthesize indexInApplicationDefinedActivities=_indexInApplicationDefinedActivities - In the implementation block
@property (nonatomic,readonly) NSString * defaultActivityTitle;                                     //@synthesize defaultActivityTitle=_defaultActivityTitle - In the implementation block
@property (nonatomic,readonly) NSString * positionBeforeActivityType;                               //@synthesize positionBeforeActivityType=_positionBeforeActivityType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)configurationForActivity:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(NSString *)activityType;
-(NSUUID *)activityUUID;
-(long long)activityCategory;
-(NSString *)activityTitle;
-(unsigned long long)indexInApplicationDefinedActivities;
-(void)updateConfigurationWithOverrideTitle:(id)arg1 ;
-(BOOL)activitySupportsPromiseURLs;
-(id)initWithActivity:(id)arg1 encodingType:(long long)arg2 ;
-(void)_collectPropertiesFromAttributesOfUnderlyingActivity:(id)arg1 ;
-(void)_decodeBasicPropertiesWithCoder:(id)arg1 ;
-(void)_decodeForEncodingByClassNameWithCoder:(id)arg1 ;
-(void)_decodeForEncodingByPropertiesWithCoder:(id)arg1 ;
-(void)_encodeBasicPropertiesWithCoder:(id)arg1 ;
-(void)_encodeByClassNameWithCoder:(id)arg1 ;
-(void)_encodeByPropertiesWithCoder:(id)arg1 ;
-(long long)encodingType;
-(BOOL)appIsDocumentTypeOwner;
-(NSString *)overrideTitle;
-(BOOL)isCapabilityBasedActivity;
-(NSString *)activityClassName;
-(NSString *)fallbackActivityType;
-(NSString *)positionBeforeActivityType;
-(long long)defaultSortGroup;
-(void)_validateProperties;
-(CGSize)preferredThumbnailSize;
-(void)setIsCapabilityBasedActivity:(BOOL)arg1 ;
-(void)setOverrideTitle:(NSString *)arg1 ;
-(NSString *)defaultActivityTitle;
-(void)setActivityClassName:(NSString *)arg1 ;
-(void)setEncodingType:(long long)arg1 ;
@end
