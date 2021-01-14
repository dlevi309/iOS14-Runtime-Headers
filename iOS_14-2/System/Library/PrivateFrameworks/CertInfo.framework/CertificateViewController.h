/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CertInfo.framework/CertInfo
*/

#import <CertInfo/CertInfo-Structs.h>
#import <UIKitCore/UITableViewController.h>

@class NSString, NSDate, NSArray;

@interface CertificateViewController : UITableViewController {

	BOOL _certificateIsRoot;
	BOOL _showCertificateButton;
	BOOL _certificateButtonIsDestructiveAction;
	int _certUIAction;
	id _certificateTrust;
	NSString* _certificateTitle;
	NSString* _certificateIssuer;
	NSString* _certificatePurpose;
	NSDate* _certificateExpiration;
	NSArray* _certificateProperties;
	NSString* _certificateButtonTitle;
	NSString* _certificateButtonDescription;
	/*^block*/id _certificateButtonActionHandler;

}

@property (nonatomic,retain) NSString * certificateTitle;                            //@synthesize certificateTitle=_certificateTitle - In the implementation block
@property (nonatomic,retain) NSString * certificateIssuer;                           //@synthesize certificateIssuer=_certificateIssuer - In the implementation block
@property (nonatomic,retain) NSString * certificatePurpose;                          //@synthesize certificatePurpose=_certificatePurpose - In the implementation block
@property (nonatomic,retain) NSDate * certificateExpiration;                         //@synthesize certificateExpiration=_certificateExpiration - In the implementation block
@property (nonatomic,retain) NSArray * certificateProperties;                        //@synthesize certificateProperties=_certificateProperties - In the implementation block
@property (assign,nonatomic) BOOL certificateIsRoot;                                 //@synthesize certificateIsRoot=_certificateIsRoot - In the implementation block
@property (assign,nonatomic) BOOL showCertificateButton;                             //@synthesize showCertificateButton=_showCertificateButton - In the implementation block
@property (nonatomic,retain) NSString * certificateButtonTitle;                      //@synthesize certificateButtonTitle=_certificateButtonTitle - In the implementation block
@property (nonatomic,retain) NSString * certificateButtonDescription;                //@synthesize certificateButtonDescription=_certificateButtonDescription - In the implementation block
@property (assign,nonatomic) BOOL certificateButtonIsDestructiveAction;              //@synthesize certificateButtonIsDestructiveAction=_certificateButtonIsDestructiveAction - In the implementation block
@property (nonatomic,copy) id certificateButtonActionHandler;                        //@synthesize certificateButtonActionHandler=_certificateButtonActionHandler - In the implementation block
@property (nonatomic,retain) id certificateTrust;                                    //@synthesize certificateTrust=_certificateTrust - In the implementation block
@property (assign,nonatomic) int certUIAction;                                       //@synthesize certUIAction=_certUIAction - In the implementation block
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)preferredContentSizeChanged:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithTrust:(SecTrustRef)arg1 action:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)dealloc;
-(id)certificateTrust;
-(void)setCertificateTrust:(id)arg1 ;
-(NSArray *)certificateProperties;
-(void)setCertificateProperties:(NSArray *)arg1 ;
-(NSString *)certificateIssuer;
-(void)setCertificateIssuer:(NSString *)arg1 ;
-(void)setCertificateTitle:(NSString *)arg1 ;
-(void)setCertificatePurpose:(NSString *)arg1 ;
-(void)setCertificateExpiration:(NSDate *)arg1 ;
-(void)setCertificateIsRoot:(BOOL)arg1 ;
-(void)setCertUIAction:(int)arg1 ;
-(void)setShowCertificateButton:(BOOL)arg1 ;
-(void)setCertificateButtonTitle:(NSString *)arg1 ;
-(void)setCertificateButtonDescription:(NSString *)arg1 ;
-(void)setCertificateButtonActionHandler:(id)arg1 ;
-(void)setCertificateButtonIsDestructiveAction:(BOOL)arg1 ;
-(BOOL)showCertificateButton;
-(NSString *)certificateButtonDescription;
-(NSString *)certificateTitle;
-(BOOL)certificateIsRoot;
-(int)certUIAction;
-(NSDate *)certificateExpiration;
-(NSString *)certificateButtonTitle;
-(BOOL)certificateButtonIsDestructiveAction;
-(id)certificateButtonActionHandler;
-(void)setCertificateTitle:(id)arg1 issuer:(id)arg2 purpose:(id)arg3 expiration:(id)arg4 properties:(id)arg5 isRoot:(BOOL)arg6 action:(int)arg7 ;
-(void)setShowCertificateButton:(BOOL)arg1 localizedTitle:(id)arg2 localizedDescription:(id)arg3 destructive:(BOOL)arg4 handler:(/*^block*/id)arg5 ;
-(NSString *)certificatePurpose;
@end
