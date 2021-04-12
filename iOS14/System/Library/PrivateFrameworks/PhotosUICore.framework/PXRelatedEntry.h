/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXRelatedEntry.h>
@class PHFetchResult, NSString, PHAssetCollection, PHObject;


@protocol PXRelatedEntry <NSObject,NSCopying>
@property (getter=isPlaceholder,nonatomic,readonly) BOOL placeholder; 
@property (nonatomic,readonly) PHFetchResult * relatedKeyAssetFetchResult; 
@property (nonatomic,readonly) NSString * relatedLocalizedTitle; 
@property (nonatomic,readonly) NSString * relatedLocalizedSubtitle; 
@property (nonatomic,readonly) PHAssetCollection * relatedAssetCollection; 
@property (nonatomic,readonly) PHObject * relatedReferenceObject; 
@property (nonatomic,readonly) NSString * relatedTitleFontName; 
@required
-(BOOL)isPlaceholder;
-(PHFetchResult *)relatedKeyAssetFetchResult;
-(NSString *)relatedLocalizedTitle;
-(NSString *)relatedLocalizedSubtitle;
-(PHAssetCollection *)relatedAssetCollection;
-(PHObject *)relatedReferenceObject;
-(NSString *)relatedTitleFontName;

@end


@class PHFetchResult, NSString, PHAssetCollection, PHObject;

@interface PXRelatedEntry : NSObject <PXRelatedEntry> {

	NSString* _relatedTitleFontName;
	PHAssetCollection* _assetCollection;
	PHFetchResult* _keyAssetFetchResult;
	PHObject* _referenceObject;
	NSString* _relatedLocalizedTitle;

}

@property (nonatomic,retain) NSString * relatedLocalizedTitle;                          //@synthesize relatedLocalizedTitle=_relatedLocalizedTitle - In the implementation block
@property (nonatomic,readonly) PHAssetCollection * assetCollection;                     //@synthesize assetCollection=_assetCollection - In the implementation block
@property (nonatomic,readonly) PHFetchResult * keyAssetFetchResult;                     //@synthesize keyAssetFetchResult=_keyAssetFetchResult - In the implementation block
@property (nonatomic,readonly) PHObject * referenceObject;                              //@synthesize referenceObject=_referenceObject - In the implementation block
@property (getter=isPlaceholder,nonatomic,readonly) BOOL placeholder; 
@property (nonatomic,readonly) PHFetchResult * relatedKeyAssetFetchResult; 
@property (nonatomic,readonly) NSString * relatedLocalizedSubtitle; 
@property (nonatomic,readonly) PHAssetCollection * relatedAssetCollection; 
@property (nonatomic,readonly) PHObject * relatedReferenceObject; 
@property (nonatomic,readonly) NSString * relatedTitleFontName;                         //@synthesize relatedTitleFontName=_relatedTitleFontName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isPlaceholder;
-(id)init;
-(PHFetchResult *)keyAssetFetchResult;
-(PHAssetCollection *)assetCollection;
-(PHFetchResult *)relatedKeyAssetFetchResult;
-(NSString *)relatedLocalizedTitle;
-(NSString *)relatedLocalizedSubtitle;
-(PHAssetCollection *)relatedAssetCollection;
-(PHObject *)relatedReferenceObject;
-(NSString *)relatedTitleFontName;
-(PHObject *)referenceObject;
-(void)setRelatedLocalizedTitle:(NSString *)arg1 ;
-(id)initWithAssetCollection:(id)arg1 keyAssetFetchResult:(id)arg2 referenceObject:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
