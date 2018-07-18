from django.shortcuts import render
from django.shortcuts import redirect
from zeroNine.models import *

# Create your views here.

def post_list(request):
    return render(request,'zeroNine/login.html',{})

#def join(request):
   # User.objects.create(id = requst.POST['id'], password = request.POST['password'])

def login(request):
    id =''
    password =''
    if request.method == "POST":
        id=request.POST['id']
        password=request.POST['password']
        row = User.objects.get(pk=id)
        if row.password==password:
            return redirect('/')
    return redirect('/')

def card_register(request):
    if request.method == "POST":
        Product.objects.create(
        catagory = request.POST['catagory']
        name = request.POST['name']
        price = request.POST['price']
        img_path = request.POST['img_path']
        facebook_addr = request.POST['facebook_addr']
        url = request.POST['url']
        notice = request.POST['notice']
        strat_time = request.POST['start_time']
        end_time = request.POST['end_time']
        member_number = request.POST['member_number'])


def card_regitster_direct(request):
    if request.method == "POST":

        Product.objects.create(
        name=request.POST['name']
        img_path=request.POST['img_path']
        facebook_addr=request.POST['facebook_addr']
        site_name=request.POST['site_name']  
        url=request.POST['url']
        notice=request.POST['notice']
        end_time=request.POST['end_time']
        member_number=request.POST['member_number']
        direct=request.POST['direct'])

def card_cancel(request):
    if request.method == "POST":
        row=User.objects.get(name=this.name)
        row.delete()

def card_cancel_direct(request):
    if request.method == "POST":
        row=User.objects.get(name=this.name)
        row.delete()

def join(request):
    Order.objects.create(
        price=request.POST['price']
        name=request.POST['name']
        img_path=request.POST['img_path']
        notice=request.POST['notice']
        )
    return redirect('/')

def join_direct(request):
    Order.objects.create(
        img_path=request.POST['img_path']
        notice=request.POST['notice']
        direct=request.POST['direct']
    )

def product_info(request):
    if request.method == "POST"
    row = Product.objects.get(name=this.name)



def mainpage(request):
    if request.method == "POST":
        row = User.objects.get(name=this.name)
        
        name=row.name
        img_path=row.img_path

def my_info(request):
    if request.method == "POST":
        row = User.obgects.get(name=this.name)


def catagory_direct(request):
    if request.method == "POST":
        site_name=request.POST['site_name']
        
        img_path=request.POST['img_path']
        
def catagory(request):
    if request.method == "POST":
        name=request.POST['name']
        img_path=request.POST['img_path']
        price=request.POST['price']
def order(request):
    if request.method == "POST":
        row = User.objects.get(name=this.name)
        order_date = request.POST['order_date']
        order_id = request.POST['order_id']
        order_option = request.POST['order_option']