/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@class NSDictionary, BBSectionIcon, NSString;

@interface BLTGizmoLegacyMapSectionInfo : NSObject {

	NSDictionary* _notificationMap;
	BBSectionIcon* _icon;
	NSString* _displayName;

}

@property (nonatomic,copy,readonly) NSString * mappedSectionID; 
@property (nonatomic,copy,readonly) NSString * mappedParentSectionID; 
@property (nonatomic,retain) BBSectionIcon * icon;                                 //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                 //@synthesize displayName=_displayName - In the implementation block
-(BBSectionIcon *)icon;
-(void)setIcon:(BBSectionIcon *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)displayName;
-(id)initWithNotificationMap:(id)arg1 ;
-(NSString *)mappedSectionID;
-(NSString *)mappedParentSectionID;
@end

