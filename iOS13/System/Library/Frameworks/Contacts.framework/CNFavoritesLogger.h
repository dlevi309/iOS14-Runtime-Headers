/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@protocol CNFavoritesLogger <NSObject>
@required
-(void)readingFavorites:(/*^block*/id)arg1;
-(void)writingFavorites:(/*^block*/id)arg1;
-(void)rematchingFavorites:(/*^block*/id)arg1;
-(void)finishedReadingRemoteFavorites;
-(void)finishedReadingFavoritesFromPath:(id)arg1 entriesCount:(unsigned long long)arg2;
-(void)finishedWritingRemoteFavorites;
-(void)finishedWritingFavoritesToPath:(id)arg1 entriesCount:(unsigned long long)arg2;
-(void)failedToReadRemoteFavorites:(id)arg1;
-(void)failedToReadFavoritesFromPath:(id)arg1 error:(id)arg2 simulateCrashReport:(BOOL)arg3;
-(void)failedToConvertFavoritesToPropertyList:(id)arg1;
-(void)failedToVerifyFavorites:(id)arg1 withPropertyListFavorites:(id)arg2 error:(id)arg3;
-(void)failedToWriteRemoteFavorites:(id)arg1;
-(void)failedToVerifyWrittenFavoritesExistsAtPath:(id)arg1;
-(void)failedToWriteFavoritesToPath:(id)arg1 error:(id)arg2 simulateCrashReport:(BOOL)arg3;
-(void)reportFavoritesAccessedBeforeFirstUnlock;

@end

