//
//  ViewController.h
//  PersonnalInfo
//
//  Created by Masoud Bozorgi on 2017-01-23.
//  Copyright © 2017 Masoud Bozorgi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *FirstNameField;
@property (weak, nonatomic) IBOutlet UITextField *LastNameField;
@property (weak, nonatomic) IBOutlet UITextField *PhoneField;
@property (weak, nonatomic) IBOutlet UITextField *NumberField;
@property (weak, nonatomic) IBOutlet UITextField *StreetField;
@property (weak, nonatomic) IBOutlet UITextField *CityField;
@property (weak, nonatomic) IBOutlet UITextField *CountryField;
@property (weak, nonatomic) IBOutlet UITextField *PostalCodeField;

@property (weak, nonatomic) IBOutlet UILabel *FirstNameLabel;
@property (weak, nonatomic) IBOutlet UILabel *LastNameLabel;
@property (weak, nonatomic) IBOutlet UILabel *PhoneLabel;
@property (weak, nonatomic) IBOutlet UILabel *NumberLabel;
@property (weak, nonatomic) IBOutlet UILabel *StreetLabel;
@property (weak, nonatomic) IBOutlet UILabel *CityLabel;
@property (weak, nonatomic) IBOutlet UILabel *CountryLabel;
@property (weak, nonatomic) IBOutlet UILabel *PostalCodeLabel;

@property (weak, nonatomic) IBOutlet UIButton *ModifyBtn;
@property (weak, nonatomic) IBOutlet UIButton *SubmitBtn;
@property (weak, nonatomic) IBOutlet UIButton *ClearBtn;




@end

