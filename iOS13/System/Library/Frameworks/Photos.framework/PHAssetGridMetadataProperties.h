/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHAssetPropertySet.h>

@class NSString;

@interface PHAssetGridMetadataProperties : PHAssetPropertySet {

	NSString* _title;
	NSString* _originalFilename;

}

@property (nonatomic,copy,readonly) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * originalFilename;              //@synthesize originalFilename=_originalFilename - In the implementation block
+(id)propertiesToFetch;
+(id)propertySetName;
-(NSString *)title;
-(NSString *)originalFilename;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
@end

