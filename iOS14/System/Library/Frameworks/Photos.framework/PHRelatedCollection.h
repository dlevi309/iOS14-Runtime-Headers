/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHAssetCollection.h>

@class NSArray, PHObject, NSString;

@interface PHRelatedCollection : PHAssetCollection {

	long long _titleCategory;
	unsigned long long _relationType;
	NSArray* _debugInfo;
	PHObject* _relatedObject;
	NSString* _highlightLocalIdentifier;
	NSArray* _momentLocalIdentifiers;
	NSString* _subtitle;

}

@property (nonatomic,readonly) NSArray * debugInfo;                                   //@synthesize debugInfo=_debugInfo - In the implementation block
@property (nonatomic,readonly) PHObject * relatedObject;                              //@synthesize relatedObject=_relatedObject - In the implementation block
@property (nonatomic,copy,readonly) NSString * highlightLocalIdentifier;              //@synthesize highlightLocalIdentifier=_highlightLocalIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * momentLocalIdentifiers;                      //@synthesize momentLocalIdentifiers=_momentLocalIdentifiers - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                                   //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) unsigned long long relationType;                       //@synthesize relationType=_relationType - In the implementation block
+(id)_relatedCollectionsFromInfos:(id)arg1 relatedObject:(id)arg2 photoLibrary:(id)arg3 ;
+(id)transientCollectionListWithCollectionsRelatedToObject:(id)arg1 relationType:(unsigned long long)arg2 options:(id)arg3 ;
+(id)transientCollectionListWithCollectionsRelatedToPersons:(id)arg1 relationType:(unsigned long long)arg2 options:(id)arg3 ;
+(id)_transientCollectionListWithCollectionsRelatedToIdentifiers:(id)arg1 relationType:(unsigned long long)arg2 options:(id)arg3 photoLibrary:(id)arg4 ;
-(BOOL)canPerformEditOperation:(long long)arg1 ;
-(NSString *)subtitle;
-(id)localizedSubtitle;
-(NSString *)highlightLocalIdentifier;
-(NSArray *)momentLocalIdentifiers;
-(long long)titleCategory;
-(NSArray *)debugInfo;
-(unsigned long long)relationType;
-(PHObject *)relatedObject;
-(id)initTransientWithAssets:(id)arg1 orFetchResult:(id)arg2 relationType:(unsigned long long)arg3 relatedObject:(id)arg4 title:(id)arg5 subtitle:(id)arg6 titleCategory:(long long)arg7 highlightLocalIdentifier:(id)arg8 momentLocalIdentifiers:(id)arg9 debugInfo:(id)arg10 ;
@end
