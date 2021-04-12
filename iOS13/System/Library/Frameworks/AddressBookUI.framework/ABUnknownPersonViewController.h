/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CNContactViewControllerPrivateDelegate.h>

@protocol ABUnknownPersonViewControllerDelegate;
@class NSString, CNContactViewController;

@interface ABUnknownPersonViewController : UIViewController <CNContactViewControllerPrivateDelegate> {

	void* _addressBook;
	void* _displayedPerson;
	BOOL _allowsActions;
	BOOL _allowsAddingToAddressBook;
	id<ABUnknownPersonViewControllerDelegate> _unknownPersonViewDelegate;
	NSString* _alternateName;
	NSString* _message;
	CNContactViewController* _cnContactViewController;

}

@property (nonatomic,retain) CNContactViewController * cnContactViewController;                                //@synthesize cnContactViewController=_cnContactViewController - In the implementation block
@property (assign,nonatomic) id<ABUnknownPersonViewControllerDelegate> unknownPersonViewDelegate;              //@synthesize unknownPersonViewDelegate=_unknownPersonViewDelegate - In the implementation block
@property (assign,nonatomic) const void* addressBook; 
@property (assign,nonatomic) const void* displayedPerson; 
@property (nonatomic,copy) NSString * alternateName;                                                           //@synthesize alternateName=_alternateName - In the implementation block
@property (nonatomic,copy) NSString * message;                                                                 //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) BOOL allowsActions;                                                               //@synthesize allowsActions=_allowsActions - In the implementation block
@property (assign,nonatomic) BOOL allowsAddingToAddressBook;                                                   //@synthesize allowsAddingToAddressBook=_allowsAddingToAddressBook - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(id)contactStore;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(CGSize)preferredContentSize;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(const void*)addressBook;
-(void)setAddressBook:(const void*)arg1 ;
-(NSString *)alternateName;
-(void)setAlternateName:(NSString *)arg1 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(BOOL)allowsActions;
-(void)setAllowsActions:(BOOL)arg1 ;
-(BOOL)allowsAddingToAddressBook;
-(void)setAllowsAddingToAddressBook:(BOOL)arg1 ;
-(const void*)displayedPerson;
-(void)loadContactViewController;
-(CNContactViewController *)cnContactViewController;
-(void)setDisplayedPerson:(const void*)arg1 ;
-(void)setCnContactViewController:(CNContactViewController *)arg1 ;
-(id<ABUnknownPersonViewControllerDelegate>)unknownPersonViewDelegate;
-(BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 property:(id)arg3 labeledValue:(id)arg4 ;
-(void)setUnknownPersonViewDelegate:(id<ABUnknownPersonViewControllerDelegate>)arg1 ;
@end
