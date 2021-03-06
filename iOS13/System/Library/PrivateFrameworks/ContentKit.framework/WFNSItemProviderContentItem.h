/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class NSString, WFFileType, NSItemProvider;

@interface WFNSItemProviderContentItem : WFContentItem <WFContentItemClass> {

	BOOL _useNewLoadingAPI;
	NSString* _contentName;
	WFFileType* _fileURLType;

}

@property (nonatomic,retain) WFFileType * fileURLType;                     //@synthesize fileURLType=_fileURLType - In the implementation block
@property (nonatomic,readonly) NSItemProvider * itemProvider; 
@property (nonatomic,copy) NSString * contentName;                         //@synthesize contentName=_contentName - In the implementation block
@property (assign,nonatomic) BOOL useNewLoadingAPI;                        //@synthesize useNewLoadingAPI=_useNewLoadingAPI - In the implementation block
+(id)typeDescription;
+(id)ownedTypes;
+(id)outputTypes;
+(id)contentCategories;
+(id)pluralTypeDescription;
+(id)countDescription;
+(id)itemProviderTypeIdentifierOverridesWithFileURLType:(id)arg1 ;
+(id)itemProviderTypeIdentifierOverrides;
-(id)name;
-(NSItemProvider *)itemProvider;
-(id)outputTypes;
-(void)generateObjectRepresentation:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(void)generateFileRepresentation:(/*^block*/id)arg1 options:(id)arg2 forType:(id)arg3 ;
-(BOOL)cachesSupportedTypes;
-(void)generateFileRepresentationWithNewAPI:(/*^block*/id)arg1 options:(id)arg2 forType:(id)arg3 ;
-(void)generateObjectRepresentationWithNewAPI:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(void)preloadImportantItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)contentName;
-(void)setContentName:(NSString *)arg1 ;
-(BOOL)useNewLoadingAPI;
-(void)setUseNewLoadingAPI:(BOOL)arg1 ;
-(WFFileType *)fileURLType;
-(void)setFileURLType:(WFFileType *)arg1 ;
@end

