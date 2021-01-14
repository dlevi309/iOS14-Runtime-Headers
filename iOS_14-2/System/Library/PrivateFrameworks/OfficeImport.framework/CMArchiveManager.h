/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <libobjc.A.dylib/TCCancelDelegate.h>

@class NSString, NSMutableDictionary, NSMutableSet, NSCache;

@interface CMArchiveManager : NSObject <TCCancelDelegate> {

	BOOL mIsThumbnail;
	BOOL mIsOnPhone;
	unsigned long long mPageCount;
	NSString* mPassphrase;
	NSMutableDictionary* mDrawableCache;
	NSString* mResourcePathPrefix;
	NSMutableSet* mPausedPaths;
	int mHeight;
	int mWidth;
	double mCommitInterval;
	BOOL mAutoCommit;
	NSCache* mStyleObjectCache;
	BOOL _noDecorations;

}

@property (copy) NSString * passphrase; 
@property (assign) BOOL noDecorations;                              //@synthesize noDecorations=_noDecorations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)resourceTypeToExtension:(int)arg1 ;
+(int)blipTypeToResourceType:(int)arg1 ;
+(id)resourceTypeToMIME:(int)arg1 ;
-(id)init;
-(unsigned long long)pageCount;
-(BOOL)isThumbnail;
-(unsigned long long)resourceCount;
-(void)setPageCount:(unsigned long long)arg1 ;
-(NSString *)passphrase;
-(void)setPassphrase:(NSString *)arg1 ;
-(BOOL)isCancelled;
-(void)setHTMLWidth:(int)arg1 ;
-(void)setHTMLHeight:(int)arg1 ;
-(void)pushText:(id)arg1 toPath:(id)arg2 ;
-(void)pushCssToPath:(id)arg1 ;
-(void)commitDataAtPath:(id)arg1 ;
-(void)closeResourceAtPath:(id)arg1 ;
-(BOOL)isOnPhone;
-(BOOL)progressiveMappingIsPausedOnPath:(id)arg1 ;
-(void)pauseProgressiveMappingOnPath:(id)arg1 ;
-(void)restartProgressiveMappingOnPath:(id)arg1 ;
-(id)copyResourceWithName:(id)arg1 type:(int)arg2 ;
-(id)copyResourceWithType:(int)arg1 ;
-(void)pushData:(id)arg1 toPath:(id)arg2 ;
-(id)addResource:(id)arg1 withType:(int)arg2 ;
-(id)addCssStyle:(id)arg1 ;
-(void)setCommitInterval:(double)arg1 ;
-(void)setAutoCommit:(BOOL)arg1 ;
-(id)_validateData:(id)arg1 withType:(int*)arg2 ;
-(id)addResource:(id)arg1 withName:(id)arg2 type:(int)arg3 ;
-(id)addResourceForDrawable:(id)arg1 withType:(int)arg2 drawable:(id)arg3 ;
-(id)cachedPathForDrawable:(id)arg1 ;
-(void)setIsOnPhone:(BOOL)arg1 ;
-(id)addStyle:(id)arg1 ;
-(void)addCssStyle:(id)arg1 withName:(id)arg2 ;
-(id)cssStylesheetString;
-(void)setResourcePathPrefix:(id)arg1 ;
-(id)resourcePathPrefix;
-(id)appendResourcePathToName:(id)arg1 ;
-(void)setIsThumbnail:(BOOL)arg1 ;
-(BOOL)isProgressive;
-(BOOL)noDecorations;
-(void)setNoDecorations:(BOOL)arg1 ;
@end
