/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SSAccount, NSString, NSNumber;

@interface SUScriptAccount : SUScriptObject {

	SSAccount* _account;

}

@property (retain) SSAccount * account; 
@property (copy) NSString * credits; 
@property (retain) NSNumber * dsID; 
@property (copy) NSString * identifier; 
@property (readonly) NSString * ITunesPassSerialNumber; 
@property (copy) NSString * kind; 
@property (getter=isPrimaryLockerAccount,readonly) id primaryLockerAccount; 
@property (retain) id lockerEnabled; 
@property (retain) id purchaseHistoryEnabled; 
@property (retain) id socialEnabled; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(BOOL)isManagedAppleID;
-(SSAccount *)account;
-(void)setAccount:(SSAccount *)arg1 ;
-(id)init;
-(NSString *)credits;
-(NSNumber *)dsID;
-(void)setSocialEnabled:(id)arg1 ;
-(void)setCredits:(NSString *)arg1 ;
-(id)attributeKeys;
-(NSString *)kind;
-(NSString *)ITunesPassSerialNumber;
-(void)setKind:(NSString *)arg1 ;
-(void)setSecureToken:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)_className;
-(BOOL)isPrimaryAccount;
-(void)setDsID:(NSNumber *)arg1 ;
-(void)dealloc;
-(id)scriptAttributeKeys;
-(void)_commitChanges;
-(void)_setServiceType:(long long)arg1 enabled:(id)arg2 ;
-(BOOL)isSecureTokenValid;
-(id)isPrimaryLockerAccount;
-(id)lockerEnabled;
-(id)purchaseHistoryEnabled;
-(void)setLockerEnabled:(id)arg1 ;
-(void)setPurchaseHistoryEnabled:(id)arg1 ;
-(id)socialEnabled;
@end
