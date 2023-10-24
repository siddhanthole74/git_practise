package chatting.application;

//import swing for JFrame
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.awt.event.MouseAdapter;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.net.Socket;
import java.text.SimpleDateFormat;
import java.util.Calendar;
import javax.swing.border.EmptyBorder;
//import java.awt.event.MouseEvent; 

//JFrame is used for the purpose of the frame
public class Client implements ActionListener {
//    torepaint the panel object of frame us req.
    static JFrame f = new JFrame();
    JTextField text;
    static DataOutputStream dout;
    static JPanel p;
    JButton send;
    static Box vertical = Box.createVerticalBox();

    Client() {
        //Initialization of frame
        f.setLayout(null);
        f.setTitle("Chat Application");
        f.setSize(350, 700);
        f.setLocation(350, 50); //opens window at (350,0)
        //getContentPane : give effect to complete frame
        f.getContentPane().setBackground(Color.LIGHT_GRAY);

        //Add panel to frame
        JPanel pl = new JPanel();
        pl.setBounds(0, 0, 350, 40);
        pl.setBackground(Color.BLACK);
        pl.setLayout(null);
        f.add(pl);

        //Add back images to panel
        ImageIcon i1 = new ImageIcon(ClassLoader.getSystemResource("Icons/3.png"));
        Image i2 = i1.getImage().getScaledInstance(20, 20, Image.SCALE_DEFAULT);
        ImageIcon i3 = new ImageIcon(i2);
        JLabel back = new JLabel(i3);
        back.setBounds(5, 5, 20, 20);
        pl.add(back);

        //Add functionality to back button
        /*create a constructor of MouseAdapter class which extends properties 
        of MouseListener interface to implement mouseckicked() method*/
        back.addMouseListener(new MouseAdapter() {
            @Override
            public void mouseClicked(MouseEvent e) {
                System.exit(0); //or we can write setVisible(flase) it means close the complete project
            }
        }
        );

        //Add profile images to panel
        ImageIcon dp1 = new ImageIcon(ClassLoader.getSystemResource("Icons/c_dp.jpg"));
        Image dp2 = dp1.getImage().getScaledInstance(30, 30, Image.SCALE_DEFAULT);
        ImageIcon dp3 = new ImageIcon(dp2);
        JLabel profile = new JLabel(dp3);
        profile.setBounds(40, 5, 30, 30);
        pl.add(profile);

        //Add video icon images to panel
        ImageIcon v1 = new ImageIcon(ClassLoader.getSystemResource("Icons/video.png"));
        Image v2 = v1.getImage().getScaledInstance(20, 20, Image.SCALE_DEFAULT);
        ImageIcon v3 = new ImageIcon(v2);
        JLabel video = new JLabel(v3);
        video.setBounds(240, 10, 20, 20);
        pl.add(video);

        //Add images to panel
        ImageIcon p1 = new ImageIcon(ClassLoader.getSystemResource("Icons/phone.png"));
        Image p2 = p1.getImage().getScaledInstance(20, 20, Image.SCALE_DEFAULT);
        ImageIcon p3 = new ImageIcon(p2);
        JLabel phone = new JLabel(p3);
        phone.setBounds(280, 10, 20, 20);
        pl.add(phone);

//            Add images to panel
        ImageIcon m1 = new ImageIcon(ClassLoader.getSystemResource("Icons/3icon.png"));
        Image m2 = m1.getImage().getScaledInstance(10, 20, Image.SCALE_DEFAULT);
        ImageIcon m3 = new ImageIcon(m2);
        JLabel moreicn = new JLabel(m3);
        moreicn.setBounds(310, 10, 20, 20);
        pl.add(moreicn);

//        Add name to the panel 
        JLabel name = new JLabel("Chingu");
        name.setBounds(90, 5, 90, 20);
        name.setForeground(Color.WHITE);
//        Font f = new Font("Arial", Font.BOLD, 16);
//        name.setFont(f);
        name.setFont(new Font("Times new Roman", Font.BOLD, 16));
        pl.add(name);

        //        Add status to the panel 
        JLabel status = new JLabel("Online");
        status.setBounds(90, 22, 90, 20);
        status.setForeground(Color.WHITE);
        status.setFont(new Font("Calibri", Font.BOLD, 10));
        pl.add(status);

//          Add Panel which contains the messages
        p = new JPanel();
//      p.setBackground(Color.GRAY);
        p.setBounds(0, 50, 350, 567);
        f.add(p);

//        Remove the header which contains the closing tab
//          setUndecorated(true);
//          Add textfield to write the message
        text = new JTextField();
        text.setBounds(0, 607, 250, 50);
        text.setFont(new Font("Arial", Font.PLAIN, 14));
        f.add(text);

//            Add a send button
        send = new JButton("Send");
        send.setFont(new Font("Arial", Font.PLAIN, 16));
        send.setBounds(250, 607, 85, 50);
        send.addActionListener(this);

        send.setBackground(Color.BLACK);
        send.setForeground(Color.WHITE);
        f.add(send);

//                    
        f.setVisible(true);

    }

    @Override
    public void actionPerformed(ActionEvent e) {
        try {
            String output = text.getText();
            JLabel outputl = new JLabel(output);

//          JPanel pll=new JPanel();
            JPanel pll = formatLabel(output);
//          pll.add(outputl);
//          System.out.println(output);
            p.setLayout(new BorderLayout());
//        Layout should be BorderLayout as it should be aligned to right
            JPanel right = new JPanel(new BorderLayout());
//        message should be aligned to the line end
            right.add(pll, BorderLayout.LINE_END);
            vertical.add(right);
            vertical.add(Box.createVerticalStrut(5));
            p.add(vertical, BorderLayout.PAGE_START);

            dout.writeUTF(output);

            text.setText("");
//        functions of frame class
            f.repaint();
            f.invalidate();
            f.validate();
        }
        catch(IOException ex)
        {
            ex.printStackTrace();
            
        }

    }

    public static JPanel formatLabel(String output) {
        JPanel panel = new JPanel();
        panel.setLayout(new BoxLayout(panel, BoxLayout.Y_AXIS));
        JLabel o = new JLabel("<html><p style=\"width:150px\">" + output + "</p></html>");
        o.setFont(new Font("Tahome", Font.PLAIN, 15));
        o.setBackground(new Color(37, 211, 103));
        o.setOpaque(true);
        o.setBorder(new EmptyBorder(15, 15, 15, 15));

        Calendar cal = Calendar.getInstance();
        SimpleDateFormat sdf = new SimpleDateFormat("HH:mm");
        JLabel time = new JLabel();
        time.setText(sdf.format(cal.getTime()));
        panel.add(o);
        panel.add(time);

        return panel;
    }

    public static void main(String[] args) throws IOException {
        new Client();

        try {
//            connetion to server 
            Socket s = new Socket("127.0.0.1", 6001);//address of local host,port no.
            DataInputStream din = new DataInputStream(s.getInputStream());
            dout = new DataOutputStream(s.getOutputStream());

            while (true) {
                {
                    p.setLayout(new BorderLayout());
                    String msg = din.readUTF();//read received message
                    JPanel panel = formatLabel(msg);
                    JPanel left = new JPanel(new BorderLayout());
                    left.add(panel, BorderLayout.LINE_START);
                    vertical.add(left);
                    vertical.add(Box.createVerticalStrut(15));
                    p.add(vertical, BorderLayout.PAGE_START);

                    f.validate();
                }
            }

        } catch (IOException edc) {
            edc.printStackTrace();
        }
    }
}
